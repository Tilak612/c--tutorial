///////////////////////////////
//Tower of Hanoi
/////////////////////////////////
#include<iostream>
using namespace std;
void toh(int n, char src, char dest, char helper){///n->number of block ////src-->source ////dest->destion ////
    if(n==0){
        return; //base
    }

    toh(n-1,src,helper,dest);
    cout<<"move from"<<src<<"to"<<dest<<endl;
    toh(n-1,helper,dest,src);

}

int main(){

    toh(3,'A','B','C');
    
    return 0;
}