#include<iostream>
using namespace std;
void reverse(int arr[],int l,int h)
{
    while(l<h)
    {
        swap(arr[l],arr[h]);
        l++;
        h--;
    }
}
void leftrotate(int arr[],int n,int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);

}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    int d=5;
    //rotating by 3
    leftrotate(arr,7,d);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}