#include<bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;  string s;
while(t--)
{
  
    cin>>s;
    int minnoOfzero=0;
    int prev=-1;
    for(int i=0;i<s.size();i++)
    {
   if(s[i]=='1')
   {
    if(prev!=-1)  minnoOfzero+=(i-prev-1);
    prev=i;
   }
    }
    cout<<minnoOfzero<<endl;
}
    return 0;
}