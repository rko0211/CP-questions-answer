#include<bits/stdc++.h>
using namespace std;
int printsum(int x)
{
    // 5 ---> 1+2+3+4+5  ---> printsum(4)+5;
    // 4----> 1+2+3+4
    // 
    // Base condition will be smallest valid input or largest invalid input
    if(x==0)  return 0;
    return printsum(x-1)+x;
}


int main()
{
  int n;
  cout<<"Enter the number :";
  cin>>n;
  int res = printsum(n);
 cout<<res<<endl;
    return 0;
}