/*
Q)Add all number till n
sum till n=n+n-1+n-2+n-3........ +1
sum till n= n+sum till n-1
sum till n-1=n-1 +sum n-2
*/
#include<iostream>
using namespace std;
int sum(int n){
    if(n==0)
    {
        return 0;

    }
    else
    {
    return n+sum(n-1);
    }
}
int main(){
    cout<<sum(4);
    return 0;
}