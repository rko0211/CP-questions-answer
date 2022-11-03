#include<bits/stdc++.h>
using namespace std;
void solve()
{
char a1,b1;
cin>>a1>>b1;
char c1,d1;
cin>>c1>>d1;
unordered_map<char,int>m;
m[a1]++;
m[b1]++;
m[c1]++;
m[d1]++;
int no_pair=0;

for(auto it:m)
{
    
    if((it.second%2==0 && it.second%4!=0)&& it.second==2)
{
      no_pair++;
}
else if(it.second>2 && it.second<4) no_pair=2; 
  if(it.second%4==0)
  {
   no_pair=3;
  } 
}
cout<<(4-no_pair-1)<<endl;
// set<char>s;
// char a1;
// cin>>a1;
// s.insert(a1);
// char a2;
// cin>>a2;
// s.insert(a2);
// char a3;
// cin>>a3;
// s.insert(a3);
// char a4;
// s.insert(a4);
// int l = s.size();
// cout<<l-1<<endl;
}
int main()
{
int t;
cin>>t;
while(t--)
{
    solve();
}

    return 0;
}