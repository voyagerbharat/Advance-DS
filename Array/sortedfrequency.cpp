#include<iostream>
using namespace std;
void freq(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int c=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]!=a[i])
            {
                break;
            }
            c++;
        }
        cout<<a[i]<<" "<<c<<"\n";
        i=i+c-1;
    }
}
int main()
{
    int arr[]={2,2,2,2,4,4,5,7,7,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    freq(arr,n);

    return 0;
}