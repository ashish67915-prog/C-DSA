#include<iostream>
using namespace std;

class Node
{
    string name;
    int roll;
    int *p;
    public:
    Node(string s,int r)
    {
       name=s;
       roll=r;
       p=new int;
       *p=10;
    }

    Node(Node &temp)
    {
        name=temp.name;
        roll=temp.roll;
        p=temp.p;
    }
    void display();
};

void Node:: display()
{
    cout<<"name of the student : "<<name<<endl;
    cout<<"roll number of the student : "<<roll<<endl;
    cout<<"value the point the pointer : "<<*p<<endl;
}

int main()
{
    Node obj1("Rohit",03);
    obj1.display();
    Node obj2=obj1;
    obj2.display();
    return 0;
}
