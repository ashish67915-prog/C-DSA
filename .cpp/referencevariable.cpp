#include<iostream>
using namespace std;

int main()
{
    int n=10;
    int &temp=n;
    temp++;
    cout<<n<<endl;
    cout<<temp;
    return 0;

}