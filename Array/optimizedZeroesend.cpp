#include<iostream>
using namespace std;
void zeroes(int arr[],int n)
{
    int c=0;
    
    for(int i=0;i<n;i++)
    {
        
        if(arr[i]!=0)
        {
            swap(arr[i],arr[c]);
            c++;
        }
        
    }
}
int main()
{
    int arr[]={1,2,0,0,4,0,6,0,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    zeroes(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}