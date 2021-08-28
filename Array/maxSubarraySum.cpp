#include<iostream>
using namespace std;
int maxSum(int arr[],int n)
{
    int res=arr[0];
    int max_ending=arr[0];
    for(int i=1;i<n;i++)
    {
        max_ending=max((max_ending+arr[i]),arr[i]);
        res=max(res,max_ending);
    }
    return res;

}
int main()
{
    int arr[]={2,5,-10,7,11,-40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int r=maxSum(arr,n);
    cout<<r;
}