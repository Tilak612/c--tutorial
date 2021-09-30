/*
Pair sum Problem
    check if there exists two elements in an array such that their sum is equal to given k
*/
#include"bits/stdc++.h"
using namespace std;
bool pairsum(int arr[],int n,int k){
    /* //method1==>
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(arr[i]+arr[j]==k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
    */
   /*
   method 2==>
   */
  int low=0;
  int high=n-1;
  
    while(low<high){
        int ans=arr[low]+arr[high];
        if(k==ans){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        if(k>ans){
            low++;
        }
        else{
            high--;
        }
     }
    return false;


}
int main(){
    int arr[]={2,4,7,11,14,16,20,21};
    int k=31;
    cout<<pairsum(arr, 8,k)<<endl;
    return 0;
}