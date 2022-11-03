#include<bits/stdc++.h>
using namespace std;
void solve()
{
int n;
char c;
cin>>n;
cin>>c;
string s;
cin>>s;
   int suff[n]={0};
   if(s[n-1]=='g')
   suff[n-1]=n-1;
   else suff[n-1]=-1;
  for(int i=n-2;i>=0;i--)
  {
    if(s[i]=='g')
    {
      suff[i]=i;
    }
    else{
      suff[i] = suff[i+1];
    }
  }
  int ans=0;
  for(int i=0;i<n;i++)
  {
    if(s[i]==c)
    {
   if(suff[i]==-1)
   {
ans = max(ans,n-i-1+1+suff[0]);
   }
  else{
    ans =max(ans,suff[i]-i);
  }
    }

  }
  cout<<ans<<endl;
 
}
int main()
{
int t;
cin>>t;
while (t--)
{
    /* code */
  solve();
}


    return 0;
}