#include<iostream>
using namespace std;

int main()
{
    int i,item,arr[]={1,2,3,4,5,6,7,8,9,0};
    cout<<"enter item you have to search : ";
    cin>>item;
    for(i=0;i<10;i++)
    {
        if(arr[i]==item)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}