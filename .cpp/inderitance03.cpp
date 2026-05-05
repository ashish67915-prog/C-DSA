#include<iostream>
using namespace std;

class Human
{
    private:
    string name;
    int age,weight;

};

class Student: protected Human
{
    private:                 //here Human character inheritedin student like this
     int roll_number,fees;   //private:
                             //string name;
                             //int age ,weight;
                      //it give error private thing is do not excessable.
    public:
    
    void fun(string n,int a,int w)
    {
        name = n;
        age = a;
        weight = w;

    }
    
    void display()
    {
        cout<<name<<" "<<age<<" "<<weight<<" ";
    }
};


int main()
{
  Student A;
  A.fun("Ankit",10,50);
  A.display();


}