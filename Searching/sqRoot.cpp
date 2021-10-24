#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int l=1,h=x;
    int mid;
    int ans=-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if((mid*mid)==x)
        {
            cout<<"sq root of "<<x<<" is "<<mid;
            return 0;
        }
        else if((mid*mid)>x)
        {
            h=mid-1;
        }
        else{
            l=mid+1;
            ans=mid;
        }
    }
    cout<<"sq root of "<<x<<" is "<<ans;
}