#include <iostream>
#include <cmath>
using namespace std;
int Logdigits(int n)
{
    return floor(log10(n)+1);
}
int DigitsRec(int n)
{
    if(n==0)
    return 0;
    return 1 + DigitsRec(n/10);
}
int main()
{
    cout<<Logdigits(10556)<<endl;
    cout<<DigitsRec(1078);
    return 0;
}