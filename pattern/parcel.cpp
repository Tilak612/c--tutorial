#include<iostream>
using namespace std;
int factorial(int num){
    int p=1;
    for(int i=2;i<=num;i++){
        p=p*i;
    }
    return p;
}


int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
        {
        cout<<factorial(i)/(factorial(j)*factorial(i-j))<<"\t";
        }
     cout<<endl;

    }
    return 0;    
}
