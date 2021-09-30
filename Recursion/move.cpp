/*
Q)move all x to the end of the string
    "axxbdxcefxhix"
    "abddcefhixxxx"

*/

#include<iostream>
using namespace std;
string remove_s(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=remove_s(s.substr(1));
    if(ch=='x'){
        return (ans+ch);
    }
    return (ch+ans);

    
}
int main(){
    cout<<remove_s("aaaabbbeexecdddd");
    return 0;
}