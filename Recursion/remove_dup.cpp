/*
Q)Remove all duplicates from the string 
        "aaaabbbeeecdddd"
            "abecd"
*/
#include<iostream>
using namespace std;
string remove_s(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=remove_s(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);

    
}
int main(){
    cout<<remove_s("aaaabbbeeecdddd");
    return 0;
}