#include<iostream>
using namespace std;


void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10 ,b = 20;

    cout<<"before swap : "<<a<<"  "<<b<<endl;
    swap(&a,&b);
    cout<<"after swap : "<<a<<"  "<<b<<endl;
    return 0;
}