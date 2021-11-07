#include<iostream>
using namespace std;
                /* sum of subarray is zero*/
int subArrSum(int *arr,int n)
{
    int sum;
    
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum = sum + arr[j];
            if(sum == 0)
              return 1;
        }
    }
    return 0;
}

int main()
{
    int n,ans;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ans = subArrSum(arr,n);
    cout<<ans;
}