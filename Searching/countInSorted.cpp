#include <iostream>
using namespace std;
int countOcc(int arr[],int n,int x)
{
    int l=0;
    int h=n-1;
    int fa=-1,la=-1;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(arr[m]>x)
        {
            h=m-1;
        }
        else if(arr[m]<x)
        {
            l=m+1;
        }
        else{
            if(m==0 || arr[m]!=arr[m-1])
            {
                fa=m;
                break;
            }
            else{
                h=m-1;
            }
        }
    }
l=0;
h=n-1;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(arr[m]>x)
        {
            h=m-1;
        }
        else if(arr[m]<x)
        {
            l=m+1;
        }
        else{
            if(m==n-1 || arr[m]!=arr[m+1])
            {
                la=m;
                break;
            }
            else{
                l=m+1;
            }
        }
    }
    if(fa==-1)return fa;
    else{
        return la-fa+1;
    }
}
int main()
{
    int arr[]={1,1,1,1,1,1,3,3,3,3,4,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<countOcc(arr,n,6);
    return 0;

}