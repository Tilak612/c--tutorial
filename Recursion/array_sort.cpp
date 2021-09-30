/*
Q)check if an array is sorted or not
        {1,2,3,4,5,6,7}
array[0]<array[1] And arra(1...n) is sorted

*/
#include <iostream>
using namespace std;
bool sorted(int arr[], int n){
    if(n==1){
        return true;
    }
    bool restArray=sorted(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);
}
int main()
{
    int arr[]={1,2,8,4,5,6,7};
    cout<<sorted(arr,6)<<endl;

    return 0;
}