//operator overloading  increament 

#include<iostream>
using namespace std;

class Increament
{
    int a,b;
    public:
    Increament(int a,int b)
    {
        this->a = a;
        this->b = b;
    }

    void operator++();
    void display();
};

void Increament :: operator++()
{
    ++a;
    ++b;
}

void Increament :: display()
{
    cout<<a<<" "<<b<<endl;
}

int main()
{
    Increament o1(10,20);
    ++o1;
    o1.display();
    return 0;
}
