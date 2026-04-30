#include<iostream>
using namespace std;

class Node
{
    string name;
    int roll;
  

    public:
    int *p;
    Node(string name,int roll,int value)
    {
        this->name=name;
        this->roll=roll;
        p=new int;
        *p =  value;
    }

    //deep cpy constructor
    Node(Node &temp)
    {
        name=temp.name;
        roll=temp.roll;
         p=new int;
        *p=*(temp.p);
    }
    void display();
};

void Node :: display()
{
    cout<<"name of the student : "<<name<<endl;
    cout<<"roll number of the student : "<<roll<<endl;
    cout<<"value that pointer point's : "<<*p<<endl;
}

int main()
{
    Node obj1("rohit",10,4);
    // obj1.display();
    Node obj2=obj1;
    // obj2.display();
    *obj2.p=20;
    obj1.display();
    obj2.display();
    return 0;
}
