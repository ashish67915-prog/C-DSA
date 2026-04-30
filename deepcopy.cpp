#include<iostream>
using namespace std;

class Node
{
    string name;
    int roll_number;
    public:
    int *p;
    Node(string name,int roll_number)
    {
        this->name = name;
        this->roll_number = roll_number;
        p = new int;
        *p = 10;
    }

    Node(Node &temp)
    {
        name = temp.name;
        roll_number = temp.roll_number;
        p=new int;
        *p=*(temp.p);
    }

    void display();

};

void Node :: display()
{
    cout<<"name of the student : "<<name<<endl;
    cout<<"roll number of the student : "<<roll_number<<endl;
    cout<<"value that a pointer points : "<<*p<<endl;
}

int main()
{
    Node obj1("ashish",03);
    obj1.display();

    Node obj2 = obj1;
    obj2.display();

    *obj2.p=20;

    obj1.display();
}