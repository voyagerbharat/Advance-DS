#include <iostream>
#include <vector>
using namespace std;
void spiralMatrix(vector<vector<int>> matrix,int ri,int c)
{
    int t=0,l=0,r=ri-1,b=c-1;
        while(t<=b && l<=r)
        {
            for(int i=l;i<=r;i++)
            {
                cout<<matrix[t][i]<<" ";
            }
            t++;
            for(int i=t;i<=b;i++)
            {
                cout<<matrix[i][r]<<" ";
            }
            r--;
            if(t<=b){
            for(int i=r;i>=l;i--)
            {
                cout<<matrix[b][i]<<" ";
            }
            b--;
            }
            if(l<=r){
            for(int i=b;i>=t;i--)
            {
                cout<<matrix[i][l]<<" ";
            }
            l++;
            }
        }
}
int main()
{
    vector<vector<int>> matrix
            {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15,16}};

           spiralMatrix(matrix,4,4);


}