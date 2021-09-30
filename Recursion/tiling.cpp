/* 
Tiling problem
Q)given a "2 * n" board and tiles of size "2 *1", coun the number of ways to tile the given board using these tiles

*/
#include<iostream>
using namespace std;
int count_way_tile(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    return count_way_tile(n-1) +count_way_tile(n-2); ///count_way_tile(n-1)=>vertical place
                                //count_way_tile(n-2) => horital place
    
}
int main(){
   cout<<count_way_tile(4);
    return 0;
}