#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int m,n,s1,s2,d;
    cin>>n>>m>>s1>>s2>>d;
    if((s1-d)>1 && (s2+d)<m) cout<<(n+m-2)<<endl;
    else if((s1+d)<n && (s2-d)>1) cout<<(n+m-2)<<endl;
    else cout<<"-1"<<endl;
}
    return 0;
}