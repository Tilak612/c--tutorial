#include<iostream>
using namespace std;
int main(){
    int i=0,b=0;
    //and opterator &&
    /// true && true ==>true
    
    if(i==0 && b==0){
        cout<<"true\n";
    }
    /// true && false ==> false
    if(i==0 && b==1){
        cout<<"true\n";
    }
    else{
        cout<<"false\n";
    }
    //or opterator ||
    /// true && true ==>true
    if(i==0 || b==0){
        cout<<"true\n";
    }

    /// false && false ==> false
    if(i==1 || b==1){
        cout<<"true\n";
    }
    else{
        cout<<"false\n";
    }



    return 0;
}