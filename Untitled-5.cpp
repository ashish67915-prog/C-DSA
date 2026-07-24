#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream fout("fourth.txt",ios::out);
    fout<<"my name is ashish kumar yadav and currently i am persuing b tech cse from central university of punjab.";
    fout.close();
    

    fstream fin("fourth.txt",ios::in);
    char ch;
    
    while(fin.get(ch))
    {
        cout<<ch;
    }

    fin.close();
    return 0;
}