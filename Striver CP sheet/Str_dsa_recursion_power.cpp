#include<bits/stdc++.h>
using namespace std;
int power(int b, int e)
{
    if(e==0)              // Base condition --> smallest valid input
    return 1;
return b*power(b,e-1);
}
int main()
{
// Power calculation using recursion
int base,expo;
cin>>base>>expo;

int res =power(base,expo);
cout<<res<<endl;
    return 0;
}