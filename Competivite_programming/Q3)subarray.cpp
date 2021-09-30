/*
subarray:
continuous part of the arry
    {1,2,0,7,2,0,2}
Number of subarrays of an array with n element=n*(n+1)/2

Subsequence:
A subsequence is a sequence that can be derived an array by selecting zero or more elements 
without charging the order of the remaining elements
    {1,2,0,7,2,0,2}  
    subsequence:
    {1,0,0,2}
    {2,7,2}
Number of subsequence of an array with n element= 2^n  
*/
/*
Quote:
Every subarray is subsequence but every subsequence is not a subarray

*/
/*
Q)Sum of all subarrays
problem:
Given an array all of size n. Output  sum of each subarray of the given array
*/
#include"bits/stdc++.h"
using namespace std;
int main(){
    int n=5 ;
    int sum=0;
    int currsum=0;
    int arr[]={1,2,0,7,2};
    for(int i=0;i<n;i++){
        sum=0;
        for (int j=i;j<n;j++){
        
            sum+=arr[j];
            cout<<arr[j]<<" ";                        
        }        
        cout<<"sum:\t"<<sum<<endl;
            
        cout<<endl;
    }
    cout<<sum<<endl;
}