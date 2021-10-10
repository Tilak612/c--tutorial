/*
Catalan number:
    Catalan numbers are a sequence of the natural numbers that occur in various 
    counting problem often incvolving recursively defined objects
    Their closed form is in terms of binomial coefficients
      c_n=(1^2*n*c_n)/n+1=
    Catalan sequence
    c_0=1
    c_1=1
    c_2=(C_0*C_1)+(c_1*c_0)=2
    c_3=(c_0*c_2)+(c_1*c_1)+(c_2*c_0)=5=======>c_j*c_i-1 //i=2 to0 //j=0 to 2 
*/
#include<bits/stdc++.h>
using namespace std;
int catalan(int n){
    if(n<=1){
        return 1;
    }
    int res=0;
    for(int i=0;i<=n-1;i++){
        res+=catalan(i)*catalan(n-i-1);
    }
    return res;
}
int main(){
    for(int i=0;i<10;i++){
        cout<<catalan(i)<<"  ";
    }
    return 0;
}