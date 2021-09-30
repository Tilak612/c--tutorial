#include<iostream>
using namespace std;
int main(){
    int  a=10;
    int *aptr=&a;
    cout<<*aptr<<endl;
    /* bleow statement increatment of address  of pointer*/
    aptr++;
    cout<<aptr<<endl;
    *++aptr;
    cout<<&aptr<<endl;
    
    
    

    return 0;
}