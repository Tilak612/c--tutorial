/*
Maximum Subarray Sum
    Find the subarray in an array which has maximum
*/

#include"bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    /*//Normal method
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=a[k];
                //cout<<a[k]<<" ";
            }
            maxsum=max(maxsum,sum);
        }
    }
    cout<<maxsum<<endl;
    */

   //Cumulative summ aproach
   /*
                   Array{ -1, 4, 7 ,2}
    Cumulative sum array{-1, 3, 10 , 12}=>[0]=-1//[1]=-1+4=-3 // [2]=-1+4+7=10 //[3]=-1+4+7+2=12
   */
  /*code:
  int currsum[n+1];
  currsum[0]=0;
  for(int i=1;i<=n;i++){
        currsum[i]=currsum[i-1]+a[i-1];    
    }
    int maxsum=INT_MIN;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum=currsum[i]-currsum[j];
            maxsum=max(maxsum,sum);
        
        }
    }
    cout<<maxsum;
    */
   //Kadane's algorithm
   /*
                      Array{ -1, 4, -6 ,7,-4}
               Current sum {-1, 4, -2 , 7, 3}
                            consider negtive value as 0
                            0       0       
   */
    int currentsum=0;
    int maxsum=INT_MIN;
      for(int i=0;i<n;i++){
          currentsum+=a[i];
          if(currentsum<0){
              currentsum=0;
          }
        maxsum=max(maxsum,currentsum);

      }
    cout<<maxsum;

}