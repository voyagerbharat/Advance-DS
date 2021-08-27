#include<iostream>
using namespace std;
void Days(int arr[],int n)
{
    int i=0;
    while(i<(n-1))
    {
       while((i<n-1) && (arr[i]>=arr[i+1]))
       {
           i++;
       } 
       int b=i;
       i++;
       while((i<n) && (arr[i]>=arr[i-1]))
       {
           i++;
       }
       int s=i-1;
       cout<<"buy on day "<<b<<"sell on day "<<s<<endl;
    }

}
int main()
{
    int arr[]={1,2,8,4,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    Days(arr,n);
}