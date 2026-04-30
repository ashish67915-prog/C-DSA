#include<iostream>
using  namespace std;

class Node
{
    string name;
    int roll;
    public:
    Node(string name,int roll)
    {
      this->name=name;
      this->roll=roll;
    }

    Node(Node &temp)
    {
        name=temp.name;
        roll=temp.roll;
    }
    
    void display();
};

void Node :: display()
{
    cout<<"name of the student : "<<name<<endl;
    cout<<"roll number of the student : "<<roll<<endl;
}

int main()
{
    Node obj1("rohit",03);
    obj1.display();
    Node obj2=obj1;
    obj2.display();
    return 0;
}