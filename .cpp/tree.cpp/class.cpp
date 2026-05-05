#include<iostream>
using namespace std;

class ATM
{
    int pin;
    
    public:
    ATM(int value)
    {
    
        pin = value;
    }
    
    void balance();
};

void ATM :: balance()
{
    cout<<"your balance is zero";
}

int main()
{

    int digit;
    cout<<"enter pin :";
    cin>>digit;
    ATM P(digit);
    P.balance();
    return 0;
}