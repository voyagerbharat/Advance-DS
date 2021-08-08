#include <iostream>
#include <cmath>
using namespace std;
void powerSer(string str)
{
    int n=str.length();
    int powSize=pow(2,n);
    for(int i=0;i<powSize;i++) //running loop for each counter value 0 to 2 toPower n
    {
        for(int j=0;j<n;j++)   //checkin each bit
        {
            if((i&(1<<j)))   //shifting 1 to left by j to check for bit in counter
            {
                cout<<str[j];
            }

        }
        cout<<" ";
    }

}
int main()
{
    string str="abc";
    powerSer(str);

}