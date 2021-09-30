/*
Friends pairing problem
Q)find the number of ways in which n friends can remain single or can be paired up
*/
#include <iostream>
int count_way_pair(int n){
    if(n==1 ||n==0 ||n==2){
        return n;
    }
    
    return 
     count_way_pair(n-2)*(n-1);
    
}
using namespace std;
int main(){
    cout<<count_way_pair(4);
    return 0;
}