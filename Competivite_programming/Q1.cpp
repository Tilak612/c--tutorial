/*
Subarray with given sum
    Problem:
        Given an unsorted array A of Size N of non-negative integers, find a 
        continuous subarray which adds to a given number S
    Constrants:
        1<=N<=10^5
        0<=Ai<=10^5
    Example:
        Input:
        N=5,s=12
        A[]={1,2,3,7,5}
        Output:
        2 4
        
*/
#include"bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    int s;
    cin>>s;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0,j=0,st=-1,ed=-1,sum=0;
    while (j<n && sum+a[j]<=s)
    {
        sum+=a[j];
        j++;
    }
    if(sum==s){
        cout<< i+1 <<" "<<j<<endl;
        return 0;
    }
    while(j<n){
        sum+=a[j];
        while(sum>s){
            sum-=a[i];
            i++;
        }
        if(sum==s){
            st=i+1;
            ed=j+1;
            break;
        }
        j++;
    }
    cout<<st << " "<<ed<<endl;
    return 0;
}