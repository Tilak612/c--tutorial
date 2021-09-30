/*
longest Arithematic subarray:
//problem:
    An arithmetic array is an array that contains at least two integers and the differences
    between consecutive
    integers are equal, 
    for example,[9,10][3,3,3] and [9,7,5,3] are arithmetic array
    while [1,3,3,7],[2,1,2] and [1,2,4] are not arithmetic arrays.
    
    sarassvati has array of N non-negative integers. The i-th intger of the array is A. She wants
    to choose a contiguous arithmetic subarray from her array that has the maximum length.
    please help her to determine the length. please help her to determine the length of 
    longest contiguous arithematic subarray

    [9,10] -> 9-10=>1
    [3,3,3] -> 3-3=>0 //3-3=0
    [9,7,5,3] -> 9-7=>2 //  7-5=2 // 5-3=2
    ar aithmetic array

    [1,3,3,7] -> //1-3=2 //3-3=0 // 3-7=4 are not arithmetic arrays

*/
/*
Input:
    The first line of the input gives the number of test cases T, T test cases follow Each test case
    begis with a line containing the integer N. The second line contains N integers. The i-th integer is A

Output:
    For each test case output one line containg case #x:y where x is the test case number (starting from 1)
    and y is the length of the longest contiguoud arithmetic subarray

Constraints:
    Time limit:20 seconds per test set.   /// 1 sec= 10^8 operation(approx)
    memory limit: 1GB
    1<= T<=100
    0<= A<=10
    Test set 1:
    2<=n <=2000.
    Test set 2:
    2<= N <=2*10^5 for at most 10 test cases.
    for the remaining case 2<= N <=2000

*/
/*
Sample Test Case:
            {10  , 7  ,4  ,6  ,8  ,10  ,11}
            ------  --- --- --- --- ---
             -3     -3  -2  -2   -2 -1
            a= {4  ,6  ,8  ,10  }
                 --- --- --- 
                 -2  -2   -2 
            
            output: a.length()=4
Intuition and Approach:
    #loop over the array and find the answer
    Maintain the following variables:
        1) prevoious common difference(pd)
        2)Current Arithmetic Subarray length (curr)
        3)max arithmetics subarray length(ans)

                             2) case
        _________________               ____________________
        |pd==A[i]-A[i-1] |              |pd !=A[i]-A[i+1]   |
        |1)current ans:  |              |Update current ans |
        | increases by1  |              | to 2              |
        |ans=max(an,curr)|              _____________________
        _________________
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
    int ans=2;
    int pd=a[1]-a[0];
    int curr=2;
    for (int j=2;j<n;j++){
        if(pd== a[j]-a[j-1]){
            curr++;
        }
        else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        
    }
    cout<<ans;
    return 0;
}















