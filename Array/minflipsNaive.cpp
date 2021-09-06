#include<iostream>
using namespace std;
void minFlips(int arr[],int n)
{
    int consc1=0;
    int consc0=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            consc1++;
            while(arr[i]==1)
            {
                i++;
            }
            i--;
        }
        else{
            consc0++;
            while(arr[i]==0){
                i++;
            }
            i--;
        }
    }
    if(consc1==consc0)
    {
        cout<<"same for both";
        return;
    }
    if(consc1>consc0)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                cout<<"from "<<i<<" to ";
                while(arr[i]==0)
                {
                    i++;
                }
                i--;
                cout<<i;
                cout<<"\n";
            }
        }
    }
    else if(consc0>consc1){
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                cout<<"from "<<i<<" to ";
                while(arr[i]==1)
                {
                    i++;
                }
                i--;
                cout<<i;
                cout<<"\n";
            }
        }

    }
}
int main()
{
    int arr[]={0,0,1,0,1,0,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    minFlips(arr,n);
    return 0;
}