#include<iostream>
#include<cstring>
using namespace std;

class Person
{
   private:
   string name; 
   public:
   Person(string name)
   {
      this->name = name;
   }
   void display();
   friend void print(Person temp);
};


void Person :: display()
{
    cout<<"Name of the student using member function : "<<name<<endl;
}

void print(Person temp)
{
    cout<<"Name of the student using friend function : "<<temp.name<<endl;
}
int main()
{
    Person o1("Ashish");
    o1.display();
    print(o1);
    return 0;
}