#include <iostream>
using namespace std;

int firstOcc(int arr[],int n,int x)
{
    int l=0;
    int h=n-1;
    int m=(l+h)/2;
    while(l<h)
    {
        if(arr[m]==x)
        {
            cout<<"here"<<l<<" "<<h<<endl;
            if(m==0 || arr[m-1]!=arr[m])
            {
                return m;
            }
            else{
                h=m;
            }
        }
        else if(arr[m]<x)
        {
            l=m;
        }
        else{
            h=m;
        }
        m=(l+h)/2;
    }
    return -1;
}
int main()
{
    int arr[]={1,1,1,1,1,1,3,3,3,3,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<firstOcc(arr,n,1);
    return 0;

}