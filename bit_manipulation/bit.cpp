#include<iostream>
using namespace std;
/*
get bit:

n=0101 ///read right to left
suppose we need to get bit at position , i=2
1<<i  =>0100   1*2*2=4
0101 & 0100 => 0100

if (n & (1<<i))!=0 then bit is 1
*/

int getBit(int n, int pos){
    return ((n & (1<< pos))!=0);
}
/*
set bit:

n=0101
suppose we need to set bit at position , i=1
1<<i  =>0100   1*2*2=4
0101 | 0100 => 0111

if (n | (1<<i))!=0 then bit is 1
*/
int setBit(int n, int pos){
    return ((n | (1<< pos)));
}
/*
clear bit:

n=0101
suppose we need to clear bit at position , i=2
1<<i  =>0100   1*2*2=4
~(1<<i) =>1011 
0101 | 0100 => 0001

if (n & (1<<i)) 
*/
int clearBit(int n, int pos){
    return ((n & ~(1<< pos)));
}
/*
update bit:

n=0101
suppose we need to update bit at position , i=2 to 1
1<<i  =>0010
~0010 =1101
0101 & 1101 =0101
1<< i =0010
0101 | 0010 =0111    
*/
int updateBit(int n, int pos, int up){
    int a=(n & ~(up<< pos));
    return (a | (up<< pos));
}
int main(){
    cout<< getBit(5,2)<<endl;
    cout<< setBit(5,1)<<endl;
    cout<< clearBit(5,2)<<endl;
    cout<< updateBit(5,3,1
    )<<endl;


    return 0;
}