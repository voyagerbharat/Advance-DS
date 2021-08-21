#include<iostream>
using namespace std;
void zeroes(int arr[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        
        int tmp;
        if(arr[i]==0)
        {
            
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]!=0)
                {
                    tmp=j;
                    break;
                }
            }
            swap(arr[i],arr[tmp]);
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