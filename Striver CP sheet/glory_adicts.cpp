#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    ll b[n];
    for(int i =0;i<n;i++)
    cin>>b[i];
    vector<ll> fire,frost;  
  for(int i =0;i<n;i++)
  {
    if(a[i])
    frost.push_back(b[i]);
    else
    fire.push_back(b[i]);
  }

  if(frost.empty())
  {
    ll ans =accumulate(fire.begin(),fire.end(),(ll)0);
    cout<<ans<<endl;
  }
  else if(fire.empty())
  {
    ll ans=accumulate(frost.begin(),frost.end(),(ll)0);
    cout<<ans<<endl;
  }
 
 else{
    ll ans=0;
  sort(frost.begin(),frost.end());
  sort(fire.begin(),fire.end());
  if(frost.size()==fire.size())
  ans-=min(frost[0],fire[0]);

 while(!frost.empty() && !fire.empty())
  {
     ans+= 2*((frost.back())+(fire.back()));
     frost.pop_back();
     fire.pop_back();
  }
  while(!frost.empty())
  {
    ans+=frost.back();
    frost.pop_back();
  }
    while(!fire.empty())
  {
    ans+=fire.back();
    fire.pop_back();
  }

   cout<<ans<<endl;
 }
 

}
// Here we take alternative sum usig two vector
int main()
{
int t;
cin>>t;
while(t--)
solve();

    return 0;
}