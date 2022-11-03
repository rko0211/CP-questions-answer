#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
int x=1;
while(x<=t)
{
int m,n,p;
cin>>m>>n>>p;
vector<vector<int>>res;
while(m--)
{
    vector<int>v(n,0);
    for(int i=0;i<n;i++)
    cin>>v[i];
    
    res.push_back(v);
}
int ans=0;
int arr[n]={0};
for(int i=0;i<res.size();i++)
{
    for(int j=0;j<res[i].size();j++)
    {
      if(res[i][j]>res[p-1][j])
      {
        arr[j]=max(arr[j],(res[i][j]-res[p-1][j]));
      }
    }
}
for(int i =0;i<n;i++)
ans+=arr[i];

cout<<"Case #"<<x<<":"<<" "<<ans<<endl;

    x++;
}

    return 0;
}