#include<iostream>
using namespace std;
int maxProfit(int arr[],int n)
{
    int p=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            p=p+arr[i]-arr[i-1];
        }

    }
    return p;

}
int main()
{
    int arr[]={1,2,8,4,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int p=maxProfit(arr,n);
    cout<<p;
}