#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"enter size : ";
    cin>>n;
    vector<int>v(n);
    
    for(int i=0;i<n;i++)
    cin>>v[i];

    int total_sum=0;
    int prefix=0;
    for(int i=0;i<n;i++)
    {
        total_sum+=v[i];
    }
    for(int i=0;i<n;i++)
    {
        prefix+=v[i];
        int ans=total_sum-prefix;
        if(ans==prefix)
        {
            cout<<"array is able to subdivide";
        }
    }
    return 0;
}