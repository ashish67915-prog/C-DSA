//copy constructor
#include<iostream>
#include<cstring>
using namespace std;

class A
{
    string name;
    int roll_no;
    public:
    A(string name , int roll_no)
    {
        this->name = name;
        this->roll_no = roll_no;
    }

    A(A &temp)
    {
        name = temp.name;
        roll_no = temp.roll_no;
    }

    void display();
};

void A :: display()
{
    cout<<"name of the student : "<<name<<endl;
    cout<<"roll number of the student : "<<roll_no<<endl;
}

int main()
{
    A o1("Ashish",03);
    o1.display();
    A o2 = o1;
    o2.display();
    return 0;
}