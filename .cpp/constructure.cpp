#include<iostream>
using namespace std;

class student
{
    string name;
    int *data;

public:
student()
{
    name = "Rohit";
    data = new int;
    *data = 10;
    cout<<"constructor is called\n";
}
~student()
{
    cout<<"destructor is called\n";
}

};
int main()
{
   student A1;
}