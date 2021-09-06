#include<iostream>
using namespace std;
void minFlips(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]!=arr[0])
            cout<<"from "<<i<<" to ";
            else
            cout<<(i-1)<<"\n";
        }
    }
    if(arr[0]!=arr[n-1])
    {
        cout<<(n-1)<<endl;
    }
}
int main()
{
    int arr[]={1,0,1,0,1,0,0,0,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    minFlips(arr,n);
    return 0;
}