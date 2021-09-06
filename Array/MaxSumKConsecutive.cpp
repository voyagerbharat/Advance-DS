#include<iostream>
using namespace std;
int maxSum(int arr[],int n,int k)
{
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    int max_sum=sum;
    for(int j=k;j<n;j++)
    {
        sum+=arr[j]-arr[j-k];
        max_sum=max(max_sum,sum);
    }
    return max_sum;

    
}
int main()
{
    int arr[]={1,10,700,2,1,6,100,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxSum(arr,n,3);
    return 0;
}