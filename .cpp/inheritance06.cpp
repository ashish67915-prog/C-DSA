#include<iostream>
using namespace std;

class Human
{
    public:
    string name;
    int age,weight;

};

class Student: protected Human
{
    private:                 //here Human character inheritedin student like this
     int roll_number,fees;   //protected:
                             //string name;
                             //int age ,weight;

    public:
    
    Student(string name,int age,int weight,int roll_number,int fees)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_number = roll_number;
        this->fees = fees;
    }
    
    void display()
    {
        cout<<name<<" age is "<<age<<", weight is "<<weight<<" , roll_number is "<<roll_number<<",fees is "<<fees;
    }
};


int main()
{
  Student A("Ankit",10,50,1,200);;
 
  A.display();


}