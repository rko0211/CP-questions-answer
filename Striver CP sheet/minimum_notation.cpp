#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
 ll t,i,n;
 cin>>t;
 while(t--)
 {
string s;
cin>>s;
 n= s.size();
char a ;
a= s[n-1];
for( i=n-2;i>=0;i--)
{
    if(s[i]>a)
    {
      if(s[i]!='9')
      {
        s[i] =char(int(s[i])+1);
      }

    }
    else{
        a=s[i];
    }
}
sort(s.begin(),s.end());
cout<<s<<endl;

 }

    return 0;
}