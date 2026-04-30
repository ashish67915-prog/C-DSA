#include<iostream>
using namespace std;

class Node
{
    int roll_no;
    string name;
    public:
    Node(string s,int r)
    {
        name=s;
        roll_no=r;
    }
    //copy constructor
    Node(Node &temp)
    {
        name=temp.name;
        roll_no=temp.roll_no;
    }
    void display();

};

void Node :: display()
{
    cout<<"name of the student : "<<name<<endl;
    cout<<"roll number of the student : "<<roll_no<<endl;
}

int main()
{
    Node obj1("ankit",04);
    obj1.display();
    Node obj2 = obj1;
    obj2.display();
    return 0;
}