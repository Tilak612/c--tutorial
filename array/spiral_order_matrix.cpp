/*
Spiral Order matrix Traversal
{
    [1,20,7]
    [20,10,5]
    [98,19,20]
}
Spiral Order matrix Traversal=> 1->20->7->5->20->19->8->20
*/
#include"bits/stdc++.h"
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    //Spiral Order matrix Traversal
    int row_start=0, row_end=n-1, col_start=0, col_end=m-1;
    while (row_start <=row_end && col_start<=col_end)
    {
        //row start
        for(int col=col_start;col<=col_end;col++){
            cout<<a[row_start][col]<<" ";
        }
        row_start++;
        //for column end
        for(int row=row_start;row<=row_end;row++){
            cout<<a[row][col_end]<<" ";
        }
        col_end--;
        //row end
        for(int col=col_end;col>=col_start;col--){
            cout<<a[row_end][col]<<" ";
        }
        row_end--;
        //for column start
        for(int row=row_end;row>=row_start;row--){
            cout<<a[row][col_start]<<" ";
        }
       col_start++;    
    }
    
    return 0;
}