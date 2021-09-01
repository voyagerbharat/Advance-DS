#include <iostream>
using namespace std;
int KadaneAlgo(int arr[],int n)
{
    int res=arr[0];
    int me=arr[0];
    for(int i=0;i<n;i++)
    {
        me=max(me+arr[i],arr[i]);
        res=max(res,me);
    }
    return res;
}
int overallMax(int arr[],int n)
{
    int normal_max=KadaneAlgo(arr,n);
    int arr_sum=0;
    for(int i=0;i<n;i++)
    {
        arr_sum+=arr[i];
        arr[i]=-arr[i];
    }
    int circular_max=arr_sum+KadaneAlgo(arr,n);
    cout<<KadaneAlgo(arr,n)<<endl;
    return max(normal_max,circular_max);
}
int main()
{
    int arr[]={2,3,-12,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<overallMax(arr,n);
    return 0;
}