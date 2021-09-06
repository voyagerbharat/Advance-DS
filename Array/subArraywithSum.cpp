#include<iostream>
using namespace std;
bool sumSubArray(int arr[],int n,int x)
{
    int j=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==x)
        {
            return 1;
        }
        else if(sum>x)
        {
            while(sum>x && j<(i))
            {
                sum=sum-arr[j];
                j++;
            }
            if(sum==x)
            {
                return 1;
            }
        }
    }
    return 0;
    
}
int main()
{
    int arr[]={1,2,4,50,9,71,23,4,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<sumSubArray(arr,n,94);
    return 0;
}