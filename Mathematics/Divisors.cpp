#include <iostream>
using namespace std;
void divisors1(int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            if(i*i!=n)
            {
                cout<<n/i<<" ";
            }
        }
    }
}
void divisors2(int n)
{
    int i;
        for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
    for(i=i-1;i>0;i--)
    {
        if(n%i==0)
        {
            if(i*i!=n)
            {
                 cout<<n/i<<" ";

            }
           
        }
    }

}
int main()
{
    divisors1(2);
    cout<<endl;
    divisors2(25);
}