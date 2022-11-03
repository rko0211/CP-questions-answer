#include<bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int digit = n%10;
int res = (digit-1)*10;      // for each individual number 10 press is always done 
int num = digit;
int i=1;
while (num<=n)
{
    /* code */
    res+=i++;
    num = num*10+digit; 
}
cout<<res<<endl;
}

    return 0;
}