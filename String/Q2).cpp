/*
    Second Question
        "Form the biggest number from the numeric string"
*/
#include"bits/stdc++.h"
using namespace std;
int main(){
    string s="54231";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
}