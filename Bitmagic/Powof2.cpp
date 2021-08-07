//power of 2 only have 1 set bit in binary representation
//we can turn off the set bit using brian krenigem algo usign n&(n-1)
#include <iostream>
using namespace std;
bool PowofTwo(int n)
{
    if(n&(n-1)==0)
    return true;
    else
    return false;
}
int main()
{
    cout<<PowofTwo(5);
    cout<<PowofTwo(32);
}