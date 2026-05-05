#include<iostream>
using namespace std;

class  Engineer
{
    void money()
    {
        cout<<"how much do you earn "<<endl;
    }
    public:
    string specialization;

   void work()
   {
    cout<<"I have specialization of "<<specialization<<endl;

   }
};

class Youtuber
{
   public:
   int subscribers;

   void Contentcreator()
   {
    cout<<"I have subscriber base of "<<subscribers<<endl;

   }
};

class CodeTeacher: public Engineer , public Youtuber
{

    public:
    string name;

    //making constructor
    CodeTeacher(string name,string specialization,int subscribers)
    {
       this->name = name;
       this->specialization = specialization;
       this->subscribers = subscribers;
    }
       void showcase()
       {
        cout<<"My name is  "<<name<<endl;
        work();
        Contentcreator();

       }
    
};
int  main()
{
  CodeTeacher A1("Ashish","CSE",10000);
  A1.showcase();
  A1.work();
  A1.Contentcreator();
//   A1.money();   money is in private section so we can't excess.
  return 0;
}