//when static int total_customer is in private section then how we access
#include<iostream>
using namespace std;

class Customer
{
  string name;
  int account_number;
  int balance;
  static int total_customer;

  public:    

  Customer(string name,int account_number,int balance)
  {
    this->name=name;
    this->account_number=account_number;
    this->balance=balance;
    total_customer++;
  }
  static void acceStatic()
  {
    cout<<total_customer<<endl;
  }

 
};


 int Customer::total_customer=0;

int main()
{
  Customer A1("Ashish",12345,1000);
  Customer A2("Ankit",67890,2000);
  Customer::acceStatic();
 

                   

}