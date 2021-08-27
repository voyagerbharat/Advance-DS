// we have to find max value of a[j]-a[i] such that j>i
#include<iostream>
using namespace std;
int main()
{
    int a[]={3,2,36,60,1,90,12,80};
    int n=sizeof(a)/sizeof(a[0]);
    int res=a[1]-a[0];
    int minval=a[0];
    for(int i=0;i<n;i++)
    {
        res=max(res,a[i]-minval);
        minval=min(a[i],minval);

    }
    cout<<res;
}