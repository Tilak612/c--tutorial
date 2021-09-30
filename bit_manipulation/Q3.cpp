/*
Q) write a program to generate all possible subsets of a set {a,b,c}
        abc
{}      000     0
{c}     001     1
{b}     010     2
{b,c}   011     3
{a}     100     4
{a,c}   101     5
{a,b}   110     6
{a,b,c} 111     7
*/
#include<iostream>
using namespace std;

void subsets(int arr[], int n){
    for(int i=0; i< (1<<n); i++){// 2^n ==> 1<<n
        for(int j=0; j<n;j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<"\n";

    }
}
int main(){
    int arr[4]={1,2,3,4};
    subsets(arr,4);
    cout<<(1<<3);
    return 0;
}