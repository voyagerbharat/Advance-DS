#include <iostream>
using namespace std;
int binarySearch(int arr[],int h, int l,int x)
{
    int m;
    while(l<=h)
    {
      m=(l+h)/2;
    if(arr[m]==x)
    {
        return m;
    }
    else if(arr[m]<x)
        {
            l=m+1;
        }
        else{
            h=m-1;
        }
    }
    return -1;

}
int main()
{
    int arr[]={1,2,3,67,89,90,120,145,200,250};
    int x;
    cin>>x;
    if(arr[0]==x)return 0;
    int i=1;
    while(arr[i]<=x)
    {
        i=i*2;
    
    }
    if(arr[i]==x)return i;
    int ans= binarySearch(arr,i+1,i/2-1,x);
    cout<<ans;
    return 0;
}