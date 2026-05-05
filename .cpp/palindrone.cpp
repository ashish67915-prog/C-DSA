// #include<iostream>
// #include<string>
// #include<algorithm>

// using namespace std;

// int main()
// {
//     string s;
//     cout<<"enter any string : ";
//     getline(cin,s);

//     reverse(s.begin(),s.end());
//     cout<<s;
//     return 0;
    
// }/
// 
#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"enter any string : ";
    getline(cin,s);

    string rev="";
    for(int i=s.size()-1;i>=0;i--)
    {
        rev+=s[i];
        
    }
    cout<<rev;
    return 0;
}