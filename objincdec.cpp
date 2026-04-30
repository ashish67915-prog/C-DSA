#include<iostream>
using namespace std;

class Node
{
    int a,b;
    public:
    Node(int a,int b)
    {
        this->a = a;
        this->b = b;
    }

    Node operator++();
    void display();
};

Node Node :: operator++()
{
    ++a;
    ++b;
    return *this;
}
void Node ::  display()
{
    cout<<a<<" "<<b<<endl;
}

int main()
{
    Node obj1(10,20);
    Node obj2 = ++obj1;

    obj1.display();
    obj2.display();
    return 0;

}