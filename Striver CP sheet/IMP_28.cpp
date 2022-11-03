#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
 string ans;
 for(int i=0;i<s.size();i++)
 {
  if(s[i]>=65 && s[i]<=90)
  s[i]=s[i]+32;
 }
  for(int i=0;i<s.size();i++)
  {
    if(i%2==0)
    {
      ans[i]='.';
    }
    if((s[i]!='a'||s[i]!='e'||s[i]!='i'||s[i]!='o'||s[i]!='u') && (i%2!=0))
    ans[i]=s[i];
  }
for(int i=0;i<ans.size();i++)
cout<<ans[i];

    return 0;
}