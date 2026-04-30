#include<iostream>
using namespace std;

class Node
{
    string name;
    int roll_no;
   
    public:
     int *p;
    Node(string s,int r)
    {
        name = s;
        roll_no = r;
        p = new int ;
        *p = 10;
    }

    //shallow copy
    Node(Node &temp)
    {
        name =  temp.name;
        roll_no = temp.roll_no;
        p = temp.p;
    }

    void display();
};

void Node :: display()
{
    cout<<"name of the student : "<<name<<endl;
    cout<<"roll no of the student : "<<roll_no<<endl;
    cout<<"value to which pointer point  : "<<*p<<endl;
}

int main()
{
    Node obj1("ankit",04);
    obj1.display();
    Node obj2=obj1;
    obj2.display();
    *obj2.p=20;
  
    obj1.display();

}