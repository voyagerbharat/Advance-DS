#include<iostream>
using namespace std;
int trap(int arr[],int n)
{
    int rmax[n];
    rmax[n-1]=arr[n-1];
    for(int j=n-2;j>=0;j--)
    {
        if(arr[j]>rmax[j-1])
        {
            rmax[j]=arr[j];
        }
        else{
            rmax[j]=rmax[j-1];
        }
    }
    int lmax=arr[0];
    int sum=0;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>lmax)
        {
            lmax=arr[i];
            continue;
        }
        else{
            sum+=min(rmax[i],lmax)-arr[i];
        }
    }
    return sum;

}
int main()
{
    int arr[]={7,4,0,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res=trap(arr,n);
    cout<<res;
    return 0;
}