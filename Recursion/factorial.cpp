/*
Q) find the factorial of a number n

n!=n*n-1*n-2*n-3.......*1
n!=n*n-1
0!=1      ////base case
*/
#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0)
    {
        return 1;
    }
    else
    {
    return n*factorial(n-1);
    }
}
int main(){
    cout<<factorial(5);
    return 0;
}