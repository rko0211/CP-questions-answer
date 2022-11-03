#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n ;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
string s;
cin>>s;
for(int i =0;i<n;i++)
{
    char c = s[i];
    for(int j=i+1;j<n;j++)
    {
        if(a[i]==a[j] && s[j]!=c)
       { 
        
        cout<<"NO"<<endl;
       
         return;
       }
    
    }
}
cout<<"YES"<<endl;
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