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
    for(int i=0;i<n;i++)
    cin>>a[i];
    int b[n];
    for(int i=0;i<n;i++)
    cin>>b[i];
    int z1 =0,on1=0;
    int z2=0, on2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        z1++;
        if(a[i]==1)
        on1++;
    }
        for(int i=0;i<n;i++)
    {
        if(b[i]==0)
        z2++;
        if(b[i]==1)
        on2++;
    }

    int ans = abs(z2-z1);
  int s=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]!=b[i])
    {
     s++;
    }

  }
  if(s>ans)
    cout<<ans+1<<endl;
    else cout<<ans<<endl;
}

    return 0;
}