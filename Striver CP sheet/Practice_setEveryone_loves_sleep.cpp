#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    
int n,m;
cin>>n>>m;
map<int,int>mp;
while(n--)
{
    int x;
    cin>>x;
    int mn,mx;
    mn =min(x,m+1-x);
    mx =max(x,m+1-x);
    if(mp[mn]==0) mp[mn]=1;
   else mp[mx]=1;
}
for(int i=1;i<=m;i++)
{
    if(mp[i]==1) cout<<"A";
    else cout<<"B";
}
cout<<endl;


 }

    return 0;
}