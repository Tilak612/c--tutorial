/*
0-1 knapsack problem
//put n item with given weight and value in a snapsack of spacity to get the maximum total calue in the knapsack

*/
#include<iostream>
using namespace std;
int knaasosack(int value[],int wt[],int n,int w){
    
    if(n==0 || w==0)
    {
        return 0;
    }
    if(wt[n-1]>w){
        knaasosack(value,wt,n-1,w);
    }
     ///vale add in n-1 in bag
    
     ///vale not add in n-1 in bag
    return max(knaasosack(value,wt,n-1,w-wt[n-1])+value[n-1],knaasosack(value,wt,n-1,w));

}
int main()
{
    int wt[]={10,20,30};
    int value[]={100,50,150};
    int n=3;
    int w=50;
    cout<<knaasosack(value,wt,3,w)<<endl;
    return 0;
}
