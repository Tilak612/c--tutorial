/*
Q)write a program to find a unique number in an array where all number except one are present twice
{2,4,6,3,4,6,2}
     0110
    ^0110
    ------
    00000
*/
#include<iostream>
using namespace std;
int unique(int arr[], int n){
    int xorsum=0;
    
    arr[0]=arr[0]& arr[0]^4;
    for(int i=0;i<n;i++){
        
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}
int main(){
    int arr[]={4,2,4};
    cout<<unique(arr,3);
    return 0;
}