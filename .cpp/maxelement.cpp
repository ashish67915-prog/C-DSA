#include<iostream>
using namespace std;

int main()
{
    int arr[5]={10,20,40,30,50};
    int max = arr[0],secmax = arr[0];
    for(int i=1;i<5;i++)
    {
      if(arr[i]>max)
      {
        secmax = max;
        max = arr[i];
      }
      else if(arr[i]>secmax && arr[i]!=max)
      {
        secmax = arr[i];
      }

    }
    cout<<"maximum array element in array"<<" : "<<max<<endl;
    cout<<"secmax element in an aaray"<<" : "<<secmax;
    return 0;
}