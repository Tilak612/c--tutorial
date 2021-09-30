/*
Q) calculate n raised to power of p
n^p= n*n*n*...........ptimes
n^p=n*n^p-1
*/
#include <iostream>
using namespace std;
int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    else
    {
        return n * power(n, p - 1);
    }
}
int main()
{
    int b;
    cin>>b;
    cout << power(b, 3);
    return 0;
}