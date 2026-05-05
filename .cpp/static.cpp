#include<iostream>
using namespace std;

class customer
{
    string name ;
    int ac_number;
    int balance;
    static int total_customer;

    public:
    customer(string a,int b,int c)
    {
        name=a;
        ac_number=b;
        balance=c;
        total_customer++;
    }
    void display()
    {
        cout<<total_customer;
    }
};
 int customer::total_customer=0;

int main()
{
   customer A1("Ashish",12345,1000);
   customer A2("Rohit",54321,1500);
   A1.display();
}