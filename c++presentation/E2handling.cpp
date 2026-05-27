#include<iostream>
#include<exception>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    try{
        if(b==0)
        {
            throw (runtime_error("cannot division by zero error"));
        }

        int c = a/b;
        cout<<c<<endl;
    }

    catch(const exception &e)
    {
        cout<<e.what();
    }

    return 0;
}