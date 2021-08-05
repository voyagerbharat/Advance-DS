#include<iostream>
#include <cmath>
using namespace std;
int Zeroes(int n)
{
    int p=1;
    int c=0;
    int m;
    while(1)
    {
        int t=pow(5,p);
        int t1=n/t;
        if(t1==0)
        {
            break;
        }
        c+=t1;
        p++;
    }
    return c;
}
int main()
{
    int n;
    cin>>n;
    cout<<Zeroes(n);
    return 0;
}