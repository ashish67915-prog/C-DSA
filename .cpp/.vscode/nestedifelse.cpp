#include<iostream>
using namespace std;

class Student
{
   int roll;
   public:
   Student()
   {
    cout<<"\"roll number found\"";

   }

   void display(int r);
};

void Student :: display(int r)
{
    roll = r;
    cout<<roll;
}
int main()
{
    Student s1;
    s1.display(5);
    return 0;
}