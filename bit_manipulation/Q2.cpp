/*
Q)write a program to count the number of ones in binary representation of  number
///(n & n-1) has same bit as n except the rightmost set
n=19=(01011)
n-1=18=(01010)

n=n&n-1         |
 =01011 & 01010 |  count 1
 =01010 =18     |

n=18=(01010)
n-1=17=(01001)
n=n&n-1         |
 =01010 & 01001 |  count 2
 =01000 =16     |

n=16(01000)
n-1=15=(00111)
n=n&n-1         |
 =01000 & 00111 |  count 3
 =00000 =18     |
*/
#include<iostream>
using namespace std;
int main(){
    int n=3;
    int count=0;
    while(n!=0){
        n=(n & n-1);
        count++;
    }
    cout<<count;
    return 0;
}