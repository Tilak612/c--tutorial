/*
Q)write a program to find a 2 unique number in an array where all number except one are present twice
{2,4,6,7,4,5,6,2}
     0110
    ^0101
    ------
     0010 --Result position 1
    ///////////////////////////
    check which number is present position 1 in array{2,4,6,7,4,5,6,2}
     0010 ->2 //after not i 4 is skip
    ^0110 ->6 
    ------
     0100
    ^0111 -> 7
    ------
     0011//after not i 4 is skip
    ^0110 ->5
    ------
     0101
    ^0010->2
    -------
     0111 ->7 result

*/
#include<iostream>
using namespace std;
int setBit(int n, int pos){
    return ((n & (1<<pos)) !=0);
}
void unique(int arr[], int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    int tempxor=xorsum;
    int setbit=0;
    int pos=0;
    while(setbit !=1){
        setbit= xorsum & 1;
        pos++;
        xorsum=xorsum>>1;
    }
    int newxor=0;
    for (int  i = 0; i < n; i++)
    {
        if(setBit(arr[i],pos-1)){
            newxor=newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
    
}

int main(){
    int arr[]={1,2,3,1,2,3,5,8};
    unique(arr,8);
    return 0;
}