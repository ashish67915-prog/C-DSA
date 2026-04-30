#include<iostream>
using namespace std;

class Node
{
    string name;
    int roll;
    static int collegeid;
    public:
    Node(string name,int roll)
    {
        this->name=name;
        this->roll=roll;
    }

    void display();
};

int Node :: collegeid=100;

void Node :: display()
{
    cout<<"name of the student : "<<name<<endl;
    cout<<"roll number of the student : "<<roll<<endl;
    cout<<"collegeid of the student : "<<collegeid<<endl;
}

int main()
{
    Node obj1("ashish",10);
    obj1.display();
    Node obj2("nitin",04);
    obj2.display();
    return 0;
}