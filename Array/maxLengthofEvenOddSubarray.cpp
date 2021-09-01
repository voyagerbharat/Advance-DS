#include<iostream>
using namespace std;
int maxLength(int arr[],int n)
{
    int res=1;
    int prmax=1;
    for(int i=1;i<n;i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0))
        {
                prmax+=1;     
        }
        else
        {
                prmax=1;
        }

        res=max(prmax,res);
    }
    return res;
}
int main()
{
    int arr[]={7,10,13,14};
    int r=maxLength(arr,4);
    cout<<r;
}