#include<iostream>
#include<vector>
using namespace std;

void diagonalsum(int arr[][3],int row,int col)
{
    //left diagonal sum
    int i=0,leftsum=0;
    while(i<row)
    {
      leftsum=leftsum+arr[i][i];
      i++;
    }
    //right side diagonal sum
     i=0;
    int j=col-1,rightsum=0;
    while(i<=j)
    {
      rightsum=rightsum+arr[i][j];
      i++;
      j--;

    }
    cout<<leftsum<<endl;
    cout<<rightsum;
}

int main()
{
  int arr[3][3];
  cout<<"enter size of array : "<<endl;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cin>>arr[i][j];
    }
  }  

  //calling of the function
  diagonalsum(arr,3,3);
  return 0;
}