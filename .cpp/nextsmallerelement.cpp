#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main()
{
    int arr[5]={24,54,23,21,56};
    stack<int>st;
    vector<int>ans(5,0);
    for(int i=0;i<5;i++)
    {
    while(!st.empty() && arr[i]<arr[st.top()])
    {
       ans[st.top()]=arr[i];
       st.pop();

    }
      st.push(i);
    }
    for(int i=0;i<5;i++)
    {
        cout<<ans[i];
    }
    return 0;
}