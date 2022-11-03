#include<bits/stdc++.h>
using namespace std;
int main()
{
int q;
cin>>q;
while(q--)
{
    int val;
    int n;
    cin>>n;
  char a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
   string ans="";
//     the charecter that present inside the string does not acctual charecter rather it is a ascii code
   for(int i=n-1;i>=0;)
   {
    if(a[i]=='0')
  {val = a[i-1]-48 + (a[i-2]-48)*10; i-=3;}
  else {val =a[i]-48;i--;}
  ans+=char(val+'a'-1);
   }
   reverse(ans.begin(),ans.end());
 cout<<ans<<endl;
}

    return 0;
}