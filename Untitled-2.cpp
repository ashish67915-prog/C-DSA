#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
{
    fstream fout("second.txt",ios::out);
    fout<<"my name is ashish kumar yadav and currently i am persuing my btech at central university of punjab.";
    fout.close();
    
    fstream fin("second.txt",ios::in);
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

