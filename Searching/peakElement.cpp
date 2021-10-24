#include <iostream>
using namespace std;
int main()
{
    int x[]={500,120,40,30,20,50,60};
    int n=7;
    int l=0,h=n;
    while(l<=h)
    {
        int m=(l+h)/2;
        if((m==0 || x[m-1]<=x[m]) && (m==n-1 || x[m]>x[m+1]))
        {
            cout<<x[m];
            return 0;
        }
        if(m>0 && x[m-1]>x[m])
        {
            h=m-1;
        }
        else{
            l=m+1;
        }
    }
    cout<<-1;
    return 0;
}