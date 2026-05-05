//here we check that after 2 clock or anticlock rotate the rotated string should be equal to second string or not 
#include<iostream>

using namespace std;

void rotateclockwise(string &s)
{
char c1=s[s.size()-1];
int  index=s.size()-2;
while(index>=0)
{
    s[index+1]=s[index];
    index--;
}
s[0]=c1;


}

void rotateanticlockwise(string &s)
{
    char c2=s[0];
 int index=1;
  while(index<s.size())
  {
    s[index-1]=s[index];
    index++;
  }
  s[s.size()-1]=c2;

}


int main()
{
string str1="amazon";
string str2="azonam";
string clockwise=str1,anticlockwise=str1;
rotateclockwise(clockwise);
rotateclockwise(clockwise);
if(clockwise==str2)
 cout<<"yes";
 

rotateanticlockwise(anticlockwise);
rotateanticlockwise(anticlockwise);
if(anticlockwise==str2)
cout<<"yes";

return 0;
}
