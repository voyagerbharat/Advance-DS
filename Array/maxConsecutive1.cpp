#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,1,1,1,0,0,1,1,1,1,1};
    int max1=0;
    for(int i=0;i<11;i++)
    {  
        if(arr[i]==1)
        {
             int count=0;
            while(arr[i]==1)
               {
                   i++;
                  count++;
               }
               if(count>max1)
               {
                   max1=count;
               }
        }
    }
    cout<<"maximum consecutive 1 in arr are:"<<max1;
}