//multiset set means set can store duplicate element also
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(10);
    s.insert(20);
    for(auto it=s.begin() ;it!=s.end() ;it++)
    {
        cout<<*it<<" ";
    }
}