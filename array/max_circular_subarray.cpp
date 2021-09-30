/*
Maximum circular subarray sum
    case1   {-1,4,-6,7,5,-4}
    case2   {4,-4,6,-6,10,-11,12}
        max subarray sum=Total sum of arry -sum of non-contributing elelments
        charge sign of element:
                {-4,4,-6,6,-10,11,-12}

*/

#include"bits/stdc++.h"
using namespace std;
int kadane(int a[],int n){
    int currentsum=0;
    int maxsum=INT_MIN;
      for(int i=0;i<n;i++){
          currentsum+=a[i];
          if(currentsum<0){
              currentsum=0;
          }
        maxsum=max(maxsum,currentsum);

      }
    return maxsum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int wrapsum;
    int nonwrapsum;
    nonwrapsum=kadane(arr,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapsum=totalsum + kadane(arr,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;
}