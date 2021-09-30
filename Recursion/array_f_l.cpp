/*
Q)Find the first and last occurence of a number in an array
    {4,2,1,2,5,2,7}
*/
#include<iostream>
using namespace std;
int print_first(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return print_first(arr,n,i+1,key);
}
int print_last(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    int restArray=print_last(arr,n,i+1,key);
    if(restArray !=-1){
        return restArray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){
    int arr[]={4,2,1,2,5,2,7};
    cout<<print_first(arr,7,0,1)<<endl;
    cout<<print_last(arr,7,0,2)<<endl;
    return 0;
}