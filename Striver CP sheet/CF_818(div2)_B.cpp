#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k,r,c;
    cin>>n>>k>>r>>c;
    vector<vector<char>>v;
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
      {
        if(i==r && j==c) v[i][j]='x';
        else v[i][j]='.';
      }
    }
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
      {
        cout<<v[i][j];
      }
    }
  }

    return 0;
}