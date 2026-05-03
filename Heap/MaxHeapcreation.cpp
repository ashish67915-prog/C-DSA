#include<iostream>
using namespace std;

class MaxHeap
{
    int *arr;
    int size;
    int total_size;
    public:
    MaxHeap(int n)
    {
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    void insert(int value)
    {
      if(size == total_size)
      {
        cout<<"Heap is overflow";
        return;
      }

      arr[size] = value;
      int index = size;
      size++;

      while(index>0 && arr[(index-1)/2]<arr[index])
      {
        swap(arr[index],arr[(index-1)/2]);
        index = (index-1)/2;
      }

      cout<<arr[index]<<"is inserted in the heap\n";
    }

    void Print()
    {
       for(int i=0;i<size;i++)
       {
        cout<<arr[i]<<"  ";
       }
       cout<<endl;
    }

    void Heapify(int index)
    {
        int largest  = index;
        int left = 2*index+1;
        int right = 2*index+2;

        if(left<size && arr[largest]<arr[left])
        {
            largest = left;
        }

        if(right<size && arr[largest]<arr[right])
        {
            largest = right;
        }

        if(largest!=index)
        {
            swap(arr[index],arr[largest]);
            Heapify(largest);
        }
    }

    void Delete()
    {
        cout<<arr[0]<<" : is deleted\n";
        arr[0] = arr[size-1];

        Heapify(0);
    }


};

int main()
{
    MaxHeap H1(6);
    H1.insert(4);
    H1.insert(14);
    H1.insert(11);
    H1.insert(17);
    H1.insert(8);
    H1.insert(2);
    H1.Print();
    H1.Delete();
    H1.Print();
}