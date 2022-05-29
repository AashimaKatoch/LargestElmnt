#include<iostream>
using namespace std;

int large(int arr[],int n)
{
    int max=0;
    int i;
    int indx;
    for(i =0;i<n;i++)
    {
       if(arr[i]>max)
      { max=arr[i];
       indx=i;
      }
    }

    return indx;
}

int main()
{
    int arr[5]={1,69,3,4,5};
    int n =5;

    cout<<"Index of largest element  is "<<large(arr,n);

    return 0;
}