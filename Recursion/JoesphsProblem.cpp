#include <iostream>
using namespace std;
int jos(int n,int k)
{
    if(n==1)
    return 0;
    else
    return (jos(n-1,k)+k)%n;     //after each recursion kth person gets killed hence in next recursion k+1th person becomes 0
    // so if its recurive called fn returns 1 the real answer would be k+1 for that recursion and when it exceeds n we have to take modulo
}
int main()
{
    cout<<jos(5,4);
}