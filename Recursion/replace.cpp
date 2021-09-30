#include<iostream>
using namespace std;
void replace(string s){
    if(s.length()==0)
    {
        return;
    }
    if(s[0]=='p' && s[1]=='i')
    {
    string res=s.substr(2);
    cout<<"3.14";
    replace(res);


    }
    else
   {
    string res=s.substr(1);
    cout<<s[0];
    replace(res);

   }

}
int main(){
    replace("Tilakpi");
    return 0;
}