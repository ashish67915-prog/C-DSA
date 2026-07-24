#include<iostream>
using namespace std;

class A
{
    private:
    int a,b;
    public:
    A(int a ,int b)
    {
        this->a = a;
        this->b = b;
    }

    friend void show(A d);
};

void show(A d)
{
    cout<<d.a<<d.b<<endl;
}

int main()
{
    A obj(10,20);
    show(obj);
    return 0;
}