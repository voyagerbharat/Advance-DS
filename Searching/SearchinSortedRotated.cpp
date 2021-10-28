#include <iostream>
using namespace std;
int main()
{
    int arr[]={20,30,1,2,3,4};
    int n=6;
    int x;
    cin>>x;
    int l=0,h=n-1;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(arr[m]==x){
        cout<<m;
        return 0;
        }
        if(arr[m]>arr[l])
        {
            if(x>=arr[l] && x<arr[m])
            {
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        else{
            if(x<=arr[h] && x>arr[m])
            {
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
    }
    cout<<-1;
    return 0;

}