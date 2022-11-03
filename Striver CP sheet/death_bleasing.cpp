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
int a[n];
int b[n];
for(int i =0;i<n;i++)
cin>>a[i];
for(int i =0;i<n;i++)
cin>>b[i];
int bmax=INT_MIN;
for(int i =0;i<n;i++)
{
   bmax=max(bmax,b[i]);
}
long long ans=0;
for(int i =0;i<n;i++)
{
   ans+=a[i]+b[i];
}
cout<<ans-bmax<<endl;

 }

    return 0;
}