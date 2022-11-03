#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
int x=1;
while(x<=t)
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int neg=0;
for(int i =0;i<n;i++)
{
    if(a[i]<0)
    neg++;
}
long long int ans=0;
int s=0;
if(neg>0)
{
for(int i=0;i<n;i++)
{ 
  s+=a[i];
  if(s>=0)
  ans+=s;
  if(s<0)
  s=0;
}
if(a[n-1]>=0)
ans+=a[n-1];

}
else{
    
 
    for (int i=0; i<n; i++)
        ans += (a[i] * (i+1) * (n-i));

}



cout<<"Case"<<" "<<"#"<<x<<":"<<" "<<ans<<endl;
    x++;
}
    return 0;
}