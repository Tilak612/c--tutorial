/*
#include<iostream>
using namespace std;
void increment(int a){
    a++;
}
int main(){
    int a=2;
    increment(a);
    cout<< a;
    return 0;
}
*/
//output: 2
///////////////////////
//pointer to pointer
#include<iostream>
using namespace std;
void increment(int *a){///call by reference
    // recieve address of in *a is 2000
    *a=3;//this statement charge address value 3
}
int main(){
    int a=2;
    cout<< a;
    increment(&a);//aptr is pointer hold addres of a and send to increment function suppose addres is 2000
    cout<< a;
    return 0;
}
//output =3