#include<iostream>
using namespace std;

class Node
{
    int a,b;
    public:
    Node(int a,int b)
    {
        this->a=a;
        this->b=b;
    }

    void operator++();
    void operator++(int);
    void display();
};

void Node :: operator++()
{
    ++a;
}

void Node :: operator++(int)
{
    b++;
}

void Node :: display()
{
    cout<<"value of a : "<<a<<endl;
    cout<<"value of b : "<<b<<endl;
}

int main()
{
    Node obj1(10,20);
    obj1++;
    ++obj1;
    obj1.display();
    return 0;

}