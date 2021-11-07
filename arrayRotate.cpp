#include<iostream>
using namespace std;
                /* array rotate by k times */
void arrayRotate(int *arr,int n,int k)
{
    int t;
    for(int i=0;i<k;i++)
    {
        int temp = arr[n-1];
        for(int j=1;j<n;j++)
        {
          arr[n-j]=arr[n-j-1];

        }
        arr[0]=temp;
    }
    for(int a=0;a<n;a++)
    {
        cout<<arr[a];
    }
}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    arrayRotate(arr,n,k);

}