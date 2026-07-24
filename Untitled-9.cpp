#include<iostream>
using namespace std;

class A
{
    public:
    void print()
    {
        cout<<"Base\n";
    }
};

class B : public A
{
    public:
    void print()
    {
        cout<<"Derived\n";
    }
};


int main()
{
    A *ptr;
    B o1;
    ptr = &o1;
    ptr->print();
    return 0;
}