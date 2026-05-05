#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int roll_no;
    string grade;
};


int main()
{
  student s;
  s.name = "Ankit";
  s.roll_no = 1;
  s.grade = "A+";
  cout<<s.name<<" "<<s.roll_no<<" "<<s.grade;
  return  0;

}