#include<iostream>
using namespace std;

class Node
{

    static int count;
    public:
    Node()
    {
        count++;
        cout<<count;
    }
  
};

int  Node :: count=0;
int main()
{
    Node s1,s2,s3,s4;
    return 0;
}

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
    this->name = name;
    this->roll = roll;
  }

  void display();
};

int Node :: collegeid = 104;

void Node :: display()
{
    cout<<"name of the student :"<<name<<endl;
    cout<<"roll number of the student : "<<roll<<endl;
    cout<<"college id : "<<collegeid;
}

int main()
{
    Node obj1("ashish",03);
    obj1.display();
    Node obj2("ashish",04);
    obj2.display();
    return 0;
}



