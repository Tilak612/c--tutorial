/*
Q)Count the number of path possible in a maze


*/
#include <iostream>
using namespace std;
int countpathmaze(int n,int i, int j){// n*n=>board //i=>start of row //j=>start oof column
    if(i==n-1 && j==n-1){/// this condition statment show end point
        return 1; 
    }
    if(i>=n || j>=n){//This condition show i>=n =>row outside loop j>=n=> column outside loop
        return 0;
    }
    
    int a=countpathmaze(n,i+1,j);//This statment move to row (down)
    int b=countpathmaze(n,i,j+1);//This statment move to column (right)
    return (a+b);
}
int main(){
    cout<<countpathmaze(3,0,0);
    return 0;
}