#include<bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
cin>>b[i];

int flag =0;
for(int i=0;i<n;i++)
{
    if(a[i]==b[i]) flag =0;
}
// let assume a[i+1]%n == b[i+1]%n   
// a[i]<a[i+1]
// b[i]<b[i+1]%n;

for(int i=0;i<n;i++)
{
    if(a[i]<b[i])
    {
        if(b[i]<b[i+1]%n)  flag =0;
        else flag =1;
    }
}
if(flag==0) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

    return 0;
}