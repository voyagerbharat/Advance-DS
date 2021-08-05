#include <iostream>
using namespace std;
bool prime1(int n)
{
    if(n==3 || n==2)
    {
        return true;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
bool prime2(int n)
{
    if(n==1)return false;
    if(n==2 || n==3)
    {
        return true;
    }
    if(n%2==0 or n%3==0)
    {
        return false;
    }
    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0 || n%(i+2)==0)
        return false;
    }
    return true;
}
int main()
{
    cout<<prime2(121);
}