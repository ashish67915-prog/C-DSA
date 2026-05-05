//factoial using recursion

// #include<iostream>
// using namespace std;

// int fact(int n)
// {
//     if(n == 0)
//     return 1;

//     return n*fact(n-1);
// }


// int main()
// {
//     int n,result;
//     cout<<"enter any number : ";
//     cin>>n;
//     result = fact(n);
//     cout<<"factorial of n : "<<result;
//     return 0;
// }


//fibonacci series using recursion
// #include<iostream>
// using namespace std;

// int fib(int n)
// {
// if(n<=1)
// return n;

// return fib(n-1) + fib(n-2);
// }

// int main()
// {
//     int n,result;
//     cout<<"enter any number : ";
//     cin>>n;
//     result = fib(n);
//     cout<<"fibonacci of n : "<<result;
//     return 0;
// }


//sum of first n natural number
// 


//reverse number using recursion
#include<iostream>
using namespace std;

void reverse(int n)
{
    if(n == 0)
    return;

    cout<<n%10;
    reverse(n/10);


}

int main()
{
    int n;
    cout<<"enter any digit : ";
    cin>>n;
    reverse(n);
    return 0;

}