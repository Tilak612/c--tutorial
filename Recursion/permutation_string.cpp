/*
Q)print all possible permutations of a string
        "ABC"
        "ABC"
        "ACB"
        "BAC"
        "BCA"
        "CAB"
        "CBA"
                            ABC
            BC,A           AC,B             AB,C
        C,AB    B,AC   C,BA     A,BC    B,CA    A,CB
*/
#include<iostream>
using namespace std;
void permutation(string s, string ans){
    if(s.length()==0){
        cout<< ans<<endl;
        return;
    }
    for(int i=0;i<s.length(); i++){
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);///s.substr(0,i)====>A s.substr(i+1)==>BC 
        permutation(ros,ans+ch);///permutaion (ABC,A""")
    }   
}
int main(){
    permutation("ABC","");
    return 0;
}