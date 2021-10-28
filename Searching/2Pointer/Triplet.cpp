#include <iostream>
using namespace std;
bool isPair(int arr[],int l1,int r1,int x)
{
    int l=l1,r=r1;
    while(l<r)
    {
        if((arr[l]+arr[r])==x)
        {
            return 1;
        }
        else if((arr[l]+arr[r])>x)r--;
        else l++;
    }
    return 0;
}
bool isTriplet(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
    if(isPair(arr,i+1,n-1,x-arr[i])){
        return 1;
    }
    }
    return 0;
}
int main()
{
    int arr[]={1,2,8,9,12,24};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<isTriplet(arr,n,20);
}