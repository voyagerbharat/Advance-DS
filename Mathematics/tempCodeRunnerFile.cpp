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
int main()
{
    divisors1(40);
}