#include"bits/stdc++.h"
using namespace std;
int main(){
    string s1="abc";
    string s2="aooo"; 
    //access element of character
    cout<<s1[1]<<endl;
    //compare string
    cout<<s2.compare(s1)<<endl;
    //insert new string
    //using insert(index_of_string,string)
    s1.insert(2,"lol");
    cout<<s1<<endl;
    //append function
    cout<<s1.append(s2)<<endl;
    //length of string
    cout<<s1.length()<<endl;
    cout<<s1.size()<<endl;
    //To get substring
    //using sunstr(starting,ending)
    string s=s1.substr(6,4);
    cout<<s<<endl;
    //To find substring 
    //using find(__Substring__)
    cout<<s1.find("ao")<<endl;
    
    //erase some charater in string
    //using erase(staring_index, number of character)
    s1.erase(2,2);
    cout<<s1<<endl;
    
    //clear string or empty string
    s1.clear();
    cout<<s1<<endl;
    //check string is empty or not 
    if (s1.empty())
        cout<<"string is empty";
    return 0;
}