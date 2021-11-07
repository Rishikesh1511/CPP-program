#include<iostream>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    for(int j=0;j<size/2;j++)
    {
        int temp = arr[size-j-1];
        arr[size-j-1]=arr[j];
        arr[j]=temp;
    }

    for(int k=0;k<size;k++)
    {
        cout<<arr[k]<<",";
    }

    return 0;
}