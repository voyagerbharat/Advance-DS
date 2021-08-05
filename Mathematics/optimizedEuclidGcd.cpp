#include <iostream>
using namespace std;
int EuclidGcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return EuclidGcd(b,a%b);
}
int main()
{
    int a=15;
    int b=10;
    cout<<EuclidGcd(a,b);
}