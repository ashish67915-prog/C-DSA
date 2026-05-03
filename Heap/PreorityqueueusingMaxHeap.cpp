#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int>P;
    P.push(10);
    P.push(5);
    P.push(20);
    P.push(30);
    P.push(40);

    while(!P.empty())
    {
        cout<<P.top()<<"  ";
        P.pop();
    }
    return 0;
}