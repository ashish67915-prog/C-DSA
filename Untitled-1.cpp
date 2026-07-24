#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;


int main()
{
    //for write in the file
    fstream fout("first.txt",ios::out);
    fout<<"my name is ashish yadav and currently i am persuing our btech in cse in central university of  punjab.";
    cout<<"file created and data is written successfully\n";
    fout.close();

   //for read in the file
   fstream fin("first.txt",ios::in);
   string name;
//    fin>>name;
//    cout<<name;


//    while(getline(fin,name))
//    {
//     cout<<name;
//    }

//    while(fin>>name)
//    {
//     cout<<name<<" ";
//    }


   fin.close();

   return 0;
}




