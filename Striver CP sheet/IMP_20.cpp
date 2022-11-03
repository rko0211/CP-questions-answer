#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
int t;
cin>>t;
while(t--)
{
    ll a,b,n;
    cin>>a>>b>>n;
    ll count=0;
    int turn =0;
    if(a>b)
    turn =1;
    else turn =0;
  while(a<=n && b<=n)
  {
    if(turn%2==0)
    {
        a+=b;
       turn++;
        count++;
    }
    else
    {
         b+=a;
         turn++;
         count++;
    } 
   

  }
    cout<<count<<endl;
}

    return 0;
}