/*
Q) write a program to check if a given number is power of 2

n=6=(0110)                      n=8=(1000)
n-1=5=(0101)                    n-1=7=(0111)

If(n&n-1) has same bits as n except the right set bit

*/
#include<iostream>
using namespace std;
int main(){
    int n=8;
    if(n && !(n & n-1)){
        cout<<"given number is power of 2"<<endl;
    }
    else{
        cout<<"given number is not power of 2"<<endl;

    }
    return 0;

}