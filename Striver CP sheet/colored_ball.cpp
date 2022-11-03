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
    vector<int>v(n);
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
sort(v.begin(),v.end());

for(int i=1;i<=n-1;i++)
{
  v[i+1]=v[i+1]-v[i];
}
if(v[n]!=0) cout<<n<<endl;
else cout<<0<<endl;
  
   
}

    return 0;
}