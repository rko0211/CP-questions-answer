#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int n ;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
    cin>>a[i];
int b[n+1];
b[0]=a[0];
for(int i =1;i<n;i++)
{
    b[i] = (a[i-1]*a[i])/__gcd(a[i-1],a[i]);
}
b[n]=a[n-1];
int flag=1;
for(int i=0;i<n-1;i++)
{
    if(__gcd(b[i],b[i+1])!=a[i])
    {
        flag=0;
        break;
    }
    
}
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
 }

    return 0;
}