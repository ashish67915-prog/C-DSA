#include<iostream>
using namespace std;

class Node
{
   string name;
   int roll_no;
   public:
   Node()
   {
    name="rohit";
    roll_no=4;
   }
   void display();

};

void Node :: display()
{
    cout<<"Name of the student : "<<name<<endl;
    cout<<"roll number of the student : "<<roll_no;
}

int main()
{
    Node obj;
    obj.display();
    
    return 0;
}

