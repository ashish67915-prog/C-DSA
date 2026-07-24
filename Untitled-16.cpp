#include<iostream>
using namespace std;

class Increament
{
    int a , b;
    public:
    Increament(int a,int b)
    {
        this->a = a;
        this->b = b;
    }

    Increament operator++();
    void display();
};

Increament Increament:: operator++()
{
    ++a;
    ++b;
    return *this;
}

void Increament :: display()
{
    cout<<a<<" "<<b<<endl;
}

int main()
{
    Increament o1(10,20);
    o1.display();
    Increament o2 = ++o1;
    
    o2.display();
    return 0;
}