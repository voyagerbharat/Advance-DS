#include <iostream>
using namespace std;
void Odd2(int arr[],int n)
{
    int x=0;
    int res1=0,res2=0;
    for(int i=0;i<n;i++)
    {
        x=x^arr[i]; // taking xor of every number so we are left with x^y
    }
    int sn=x&(-x);   //only rightmost set bit remains   x&(~(x-1)) == x&(-x)

    for (int i = 0; i < n; i++) 
        { 
            if ((arr[i] & sn) != 0) 
                res1 = res1 ^ arr[i]; 
            else
                res2 = res2 ^ arr[i]; 
        } 
    cout<<res1<<" "<<res2;
}
int main()
{
    int arr[]={2,2,11,3,3,4,5,5,6,6,6,6};
    Odd2(arr,12);

}