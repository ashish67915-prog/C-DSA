#include<iostream>
using namespace std;

class Human
{
    protected:
    string name;
    int age;

    public:

    void work()
    {
        cout<<"work is done";
    }

};

class Student: public Human
{
    int roll_number,fees;

    public:

    Student(string name,int age,int roll_number,int fees)
    {
      this->name = name;
      this->age = age;
      this->roll_number = roll_number;
      this->fees = fees;

    }
};


int main()
{
   Student A1("Ashish",20,03,1000);
   A1.work();
   return 0;
}