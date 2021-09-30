#include"bits/stdc++.h"
using namespace std;
int main(){
    string s1="adsbsjabdkldlldl";
    //convert into upper case
    for (int i = 0; i <s1.size(); i++)
    {
            if(s1[i]>= 'a' && s1[i]<= 'z'){
                s1[i]-=32;
            }
    }
    
    cout<<s1<<endl;
    //convert into lower case
    for (int i = 0; i <s1.size(); i++)
    {
            if(s1[i]>= 'A' && s1[i]<= 'Z'){
                s1[i]+=32;
            }
    }
    
    cout<<s1;
   
    return 0;
}