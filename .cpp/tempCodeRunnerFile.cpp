#include<iostream>
using namespace std;

class Increament
{
    int a,b,c;
    public:
    Increament(int a,int b,int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
   Increament operator++();
   void display();
};
Increament Increament :: operator++()
{
    ++a;
    ++b;
    ++c;
    return *this;
}
void Increament :: display()
{
    cout<<a<<" "<<b<<" "<<c<<endl;
}

int main()
{
    Increament obj1(10,20,30);
    Increament obj2 = ++obj1;

    obj1.display();
    obj2.display();
    return 0;
}