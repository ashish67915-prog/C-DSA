//operator overloading

#include<iostream>
using namespace std;

class Increament
{
    public:
    int a ,b;
    Increament(int a,int b)
    {
        this->a = a;
        this->b = b;
    }

    void display();
    void operator++();
};

void Increament :: display()
{
    cout<<a<<" "<<b<<endl;
}

void Increament  :: operator++()
{
    ++a;
    ++b;
}

int main()
{
    Increament o1(10,20);
    ++o1;
    o1.display();
    return 0;
}