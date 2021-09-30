#include<iostream>
using namespace std;
int main(){
    /* 
    & => and operator
        0101
      & 0110
      -------
        0100
    */

    /* 
    | => or operator
        0101
      | 0110
      -------
        0111
    */

    /* 
    ^ => XOR operator
    IN XOR if 1)0 ^0 ==>0 
              2)1 ^ 1 ==>0
              3)1 ^ 0 ==>1
              4)0 ^ 1 ==>1
        0101
      ^ 0110
      -------
        0011
    */
    /* 
    ~ => one complement operator
      ~ 0101
      -------
        1010
    */
    /*
    << left shift operator
        4<<1
        number << shift  bit by this number
        a<<n ===============================> a*2^n
        (4==>0100)
        =1000
    */  
   /*
    >> right shift operator
        4>>1
        a>>n ===============================> a/2^n

        (4==>0100)
        =0010
    */
   /*
   Miscellaneous Operators==>
    1)sizeof() ---> return the size of variable
    2)condition? X:Y  ---> return value of X if condition is true or else value of Y
    3)Cast ---> convert one data type to another EXample: char a='0'; int(a);


   */  
    return 0;
}