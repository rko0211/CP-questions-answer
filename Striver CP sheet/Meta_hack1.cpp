#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>m;
 int t;
cin>>t;
for(int test =1;test<=t;++test)
{
    int n,k;
    
    cout<<"Case #"<<test<<": ";
    cin>>n>>k;
    bool flag =true;
m.clear();
for(int i=0;i<n;i++)
{
    int p;
    cin>>p;
    if(m[p]==0) m[p]=1;
    else m[p]+=1;
}
for(auto &it:m)
{
    if(it.second>=3){
        flag=false;
        break;
    }
}
bool odd =false;
for(auto &itr:m)
{
    if(itr.second==1)
    {
        odd=true;
        break;
    }
}
if(k*2<n || flag==false||odd == false)
cout<<"NO"<<endl;
else cout<<"YES"<<endl;
}

return 0;
}