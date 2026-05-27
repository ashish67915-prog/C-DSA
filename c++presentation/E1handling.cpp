#include<iostream>
using namespace std;

class Customer
{
    string name;
    int balance , account_number;

    public:
    Customer(string name ,int balance , int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    //deposit
    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
            cout<<amount<<" rs is credited successfully\n";
        }
        else
        {
            throw "amount should be greater than Zero";
        }
    }

    //withdrawal
    void withdrawal(int amount)
    {
        if(amount>0 && amount<=balance)
        {
            balance-=amount;
            cout<<amount<<" rs is debited successfully\n";
        }

        else if(amount<0)
        {
            throw "amount should be greater than zero";
        }

        else 
        {
            throw "Your balance is low";
        }

    }
};

int main()
{
    Customer C("Ashish",6000,123);
    try{
    C.deposit(500);
    C.withdrawal(7000);
    }
    
    catch(const char *e)
    {
        cout<<"Exception occured: "<<e;
    }

    return 0;

}