#include <iostream>
using namespace std;
int odd(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        res^=arr[i];
    }
    return res;

}
int main()
{
    int arr[]={1,1,1,1,2,2,3,3,3,4,4,4,4};
    cout<<odd(arr,13);

}