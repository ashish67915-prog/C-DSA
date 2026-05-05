#include<iostream>
using namespace std;

class Customer
{
  string name;
  int account_number;
  int balance;
  static int total_customer;

  public:     //for direct access we have to specify static in total_customer in public section
              //static int total_customer
  Customer(string name,int account_number,int balance)
  {
    this->name=name;
    this->account_number=account_number;
    this->balance=balance;
    total_customer++;
  }

  void display()
  {
    cout<<total_customer<<endl;

  }
};


 int Customer::total_customer=0;

int main()
{
  Customer A1("Ashish",12345,1000);
  Customer A2("Ankit",67890,2000);
  A1.display();
                   

  //when static in public section then
  //Customer::total_customer=5;
  //A1.display();
  //Result 5.
}