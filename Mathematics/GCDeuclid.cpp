#include <iostream>
using namespace std;
int euclidGCD(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        b=b-a;
    }
    return a;
}
int main()
{
    int a=99;
    int b=33;
    cout<<euclidGCD(a,b);

}