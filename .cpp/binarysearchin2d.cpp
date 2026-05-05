#include<iostream>
using namespace std;

int main()
{
    int arr[4][5]={2,6,10,14,18,20,24,2729,38,47,52,78,93,102,108,111,200,218,320};
    int start=0,end=19;
    int target;
    cout<<"enter target : ";
    cin>>target;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        int row_index=(mid/5);
        int col_index=(mid%5);
      
        if(arr[row_index][col_index]==target)
        {
          cout<<row_index<<col_index;
          break;
        }
        else if(arr[row_index][col_index]<target)
        {
            start=mid+1;
        }
        else
            end=mid-1;
    }
    return 0;
}