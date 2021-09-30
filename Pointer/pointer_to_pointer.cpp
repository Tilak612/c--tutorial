#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p;
    p=&a;// address of a suppose 2000
    cout<<*p<<endl; 
    int **q=&p;
    cout<<*q<<endl;// print address of a suppose 2000
    cout<<**q<<endl;
    
    return 0;
}