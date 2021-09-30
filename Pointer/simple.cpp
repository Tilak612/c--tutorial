#include<iostream>
using namespace std;
int main(){
    int  a=10;
    int *aptr;
    aptr=&a;
    cout<<aptr<<endl;
    cout<<*aptr<<endl;
    int arr[]={10,20,30};
    cout<<*arr<<endl;
    // array of pointers
    int *ptr=arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;
    }
    // array of pointers
    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<endl;
        //arr++; ///illegal
    }
    
    

    return 0;
}