#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

int main()
{
    fstream fout("third.txt",ios::app);
    fout<<"my name is ashish kumar yadav and currently i am persuing btech cse at central university of punjab .";
    fout.close();

    fstream fin("third.txt",ios::in);
    string name;
    fin>>name;
    cout<<name;
    while(fin>>name)
    {
        cout<<name<<" ";
    }
    fin.close();

    return 0;
}