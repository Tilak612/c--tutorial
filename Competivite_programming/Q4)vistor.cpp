/*
Problem :
    Isyana is9 given the number of visitors at her local theme park on N consecutive dys. The number of
    visitors on the i-th on the ith day is V, A day is record breaking if it satisfies both of the 
    following condition:
        #The number of visitors on the day is strictly lager than the number of visitors on each
         of the previous days.
        # Either it is the last day or the number of visitors on the day is strictly larger than 
          the number of visitors on the following day.
    Note that the ver first day could be a record breaking day!
    please help isyana find our the number of record breaking days

Input:
    The first line of the input gives the number of test cases T. T test cases follow. Each test case 
    begins with a line containing the integer N. The second line contains N integers. The i-th integer is v
Output:
    For each test case ourpur one line containing case #x:y wherer x is the test case number (staring from 1)
    and y is the number  of record breaking days
Constraints:
    Time limit:20 seconds per test set.
    memory limit:1GB
    1<=T<=100
    0<=V<=2*10^5
    Test set 1:
    1<=N<=1000
    Test set 2:
    1<=N<=2*10^5 for at most 10 test cases.
    for the remaining cases 1<=N<=1000
Method:
                        Record Breaking Day
        ___________________                 __________________
        |strictly greater  |                |Strictly greater |
        |than all previous |                |than following   |
        |values            |                |value            |
        ___________________                 |_________________|
                (1)                                 (2)
Sample Test Case:
                {1  ,2  ,0  ,7  ,2  ,   0  ,   2  , 2}
check            F   T   F   T   F      F      F    F
containe        (2)     (1)      (1)    (1)   (1)   (1)
                        (2)      (2)          (2)   (2)
*/
#include"bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    a[n]=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    int ans=0;
    int mx=-1;

    for(int i=0;i<n;i++){
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx=max(mx,a[i]);
    }
    cout<<ans<<endl;
    return 0;
}