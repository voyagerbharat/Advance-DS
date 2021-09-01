#include<iostream>
using namespace std;
int majority(int arr[],int n)
{
    int count=1;
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(arr[res]==arr[i])
        count++;
        else
        count--;
        if(count==0)
        {
            count=1;
            res=i;
        }
    }
    count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[res]==arr[i])
        count++;
    }
    if(count>n/2)
    return arr[res];
    else
    return -1;
}
int main()
{
    int arr[]={1,2,4,4,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<majority(arr,n);
    return 0;
}