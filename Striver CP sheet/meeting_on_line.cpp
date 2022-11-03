#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int n;
    cin>>n;
    vector<int>x(n);          // size of the vector is decleared like that
    vector<int>t(n);
   for(int i =0;i<n;i++)
  { 
    cin>>x[i];
  }
   for(int i=0;i<n;i++)
  { 
    cin>>t[i];
  }
vector<int>newlist      ;                 // used to neutralised the effect of t;
for(int i=0;i<n;i++)
{
    newlist.push_back((x[i]-t[i]));
   newlist.push_back((x[i]+t[i]));
}
int mn = newlist[0];
int mx = newlist[0];
for(int i=0;i<newlist.size();i++)
{
    mn =min(mn,newlist[i]);
    mx =max(mx,newlist[i]);
}
int ans =(mn+mx);
cout<<ans/2;
if(ans%2==1)
{cout<<".5";
}
cout<<endl;
 }

    return 0;
}