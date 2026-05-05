#include<iostream>
using namespace std;

class student 
{
    private:
    string name;
    int age ,roll_number;
    string grade;

    public:
    void setname(string s)
    {
        if(s.size()==0)
        {
            cout<<"invalid name: ";
            return;
        }
        name=s;


    }
    void setage(int a)
    {
        if(a<0 || a>100)
        {
            cout<<"invalid age : ";
            return;
        }
        age=a;
    }


    void setgrade(string s)
    {
      grade=s;
    }


    void setroll_number(int r)
    {
      roll_number=r;
    }
    

   string getgrade(int pin)
   {
    if(pin==123)
    {
        return grade;
    }
    return " ";
   }
    
};
int main()
{
    student s1;
    s1.setname("");
    s1.setage(21);
    s1.setgrade("A+");
    s1.setroll_number(20);

   cout<<s1.getgrade(123);
    

}