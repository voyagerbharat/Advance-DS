#include <iostream>
using namespace std;
bool isPair(int arr[],int n,int x)
{
    int l=0;
    int r=n-1;
    while(l<r)
    {
        if((arr[l]+arr[r])==x){
            cout<<l<<" "<<r<<endl;
            return 1;
        }
        else if((arr[l]+arr[r])>x)r--;
        else l++;
    }
    return 0;
}
int main()
{
    int arr[]={1,2,5,7,8,9,12,24};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<isPair(arr,n,18);
}