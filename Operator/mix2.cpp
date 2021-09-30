#include<iostream>
using namespace std;
int main(){
    int i=0,c;
    // 0    0       1   1
    c=i++ - --i + ++i - i--;
    cout<<c;

    return 0;
}