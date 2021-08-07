#include<iostream>
using namespace std;
void KthBit1(int n,int k)  //using leftshift
{
    if(n&(1<<(k-1))!=0)
    cout<<"yes";
    else
    cout<<"no";
}
void KthBit2(int n,int k)
{
    if((n>>(k-1))&1!=0)
    cout<<"yes";
    else
    cout<<"no";
}
int main()
{
    KthBit1(5,3);
    cout<<endl;
    KthBit2(5,3);
}