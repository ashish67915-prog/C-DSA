#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"enter number for which you have to find the square root : "<<endl;
    cin>>x;
    int start=0,end=x,res;
    if(x<2)
    {
        cout<<x;
    }
    else
    {
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(mid==x/mid)
        {
           res=mid; 
           break;
        }
        else if(mid<x/mid)
        {
            res=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }

    }
    cout<<res;
    return 0;
}
}