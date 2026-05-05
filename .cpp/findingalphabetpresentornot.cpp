#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string sentence="the quick brown fox jumps over the lazy dog";
    vector<int>alpha(26,0);
    for(int i=0;i<sentence.size();i++)
    alpha[sentence[i]-'a']=1;

    for(int i=0;i<26;i++)
    {
        if(alpha[i]==1)
        cout<<1;
        break;
        
    }
    return 0;
}