//here we se the concept of static member function by the help of static member function
//access the static total_customer


#include<iostream>
using namespace std;

class Customer
{
  string name;
  int account_number;
  int balance;
  static int total_customer;
  static int total_balance;
  public:    

  Customer(string name,int account_number,int balance)
  {
    this->name=name;
    this->account_number=account_number;
    this->balance=balance;
    total_customer++;
    total_balance+=balance;
  }


  static void acceStatic()
  {
    cout<<"total customer: "<<total_customer<<endl;
    cout<<"total balance: "<<total_balance<<endl;
  }


  
  void deposit(int amount)
  {
    if(amount>0)
    {
    balance+=amount;
    total_balance+=amount;
    }
  }


  void withdrawal(int amount)
  {
    if(amount>0 && amount<=balance)
    {

    balance-=amount;
    total_balance-=amount;
    }
  }



};


 int Customer::total_customer=0;
 int Customer::total_balance=0;

int main()
{
  Customer A1("Ashish",12345,1000);
  Customer A2("Ankit",67890,2000);
  Customer A3("Aman",13245,3000);
  
  A1.deposit(800);
  A2.withdrawal(200);
  
  Customer::acceStatic();
                   

}