#include<iostream>
using namespace std;

class Human
{
    public:
    void print()
    {
        cout<<"Base class\n";
    }
};

class Student :  public Human
{
  
} ;

int main()
{
    Student s1;
    s1.print();
    return 0;
}