#include<iostream>
using namespace std;

class Student
{
    public:
    void display();
    friend void show();
};

void Student :: display()
{
    cout<<"this is the display"<<endl;
}


void show()
{
    cout<<"this is the show"<<endl;
}

int main()
{
    Student obj1;
    obj1.display();   //calling member function
    show();           //calling friend function
    return 0;
}