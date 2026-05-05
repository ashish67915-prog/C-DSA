#include<iostream>    //Encapsulation - we do not give the direct acces of any data and write all the variable and function in class .
using namespace std;  //to not any do any unwanted thing with the data

class Customer
{
  string name;
  int account_number,balance,age;

  public:

  Customer(string name,int account_number,int balance,int age)
  {
    this->name=name;
    this->account_number=account_number;
    this->balance=balance;
    this->age=age;

  }

  void deposit(int amount)
  {
    if(amount>0)
    {
        balance+=amount;
    }
    else
    cout<<"invalid amount ";
  }

   void withdrawal(int amount)
   {
    if(amount>0 && amount<=balance)
    {
        balance-=amount;

    }
    else
    cout<<"invalid amount";

   }

   void display()
   {
    cout<<name<<" "<<account_number<<" "<<balance<<" "<<age<<endl;
   }

  
};




int main()
{
     Customer A1("Ankit",12345,1000,24);
     Customer A2("Rahul",54321,2000,23);
     Customer A3("Mohan",67890,900,17);
     A1.deposit(200);
     A1.display();
}