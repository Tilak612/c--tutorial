#include"bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unsigned int opsize=pow(2,n)-1;
    for(int i=1;i<opsize;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(i & (1<<j) ){
                if(count==0||count==1)
                {
                count+=1;
            }
                else
                {
                cout<<(i & (1<<j))<<"ddd"<<a[j]<<" ";
                }
            }
            
        }
        cout<<endl;
    }
   }
