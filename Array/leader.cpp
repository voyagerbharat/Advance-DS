#include<iostream>
using namespace std;
void leader(int arr[],int n)
{
    int curr=arr[n-1];
    cout<<curr<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(curr<arr[i])
        {
            curr=arr[i];
            cout<<curr<<" ";
        }
    }
}
int main()
{
    int arr[]={100,2,50,40,4,0,6,70,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    leader(arr,n);

    return 0;
}