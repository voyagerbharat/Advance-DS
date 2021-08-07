#include <iostream>
using namespace std;
int SetBit1(int n) // checking each bit from last bit till we scan the whole number
{
    int count=0;
    while(n>0)
    {
        if(n&1==1)
        {
            count++;
        }
        n=n>>1;
    }
    return count;
}
int setBit2(int n)//turning off set bit in each iterations
{
    int count=0;
    while(n>0)
    {
        n=n&(n-1); //turns off last set bit
        count++;
    }
    return count;
}
int main()
{
    cout<<SetBit1(5);
    cout<<endl;
    cout<<setBit2(7);
}

