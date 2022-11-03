#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
int n;
cin>>n;
int a[n];
for(int i =1;i<=n;i++)
cin>>a[i];

// we need (i+j) is maximum
//  we have to traverse from last side

int maxval=INT_MIN;
int flag=0;
for(int i=n;i>0;i--)
{
    for(int j=n;i>0;j--)
    {
           if(__gcd(a[i],a[j])==1)
           {
            maxval= max(maxval,(i+j));
            flag=1;
           }
    }

}
if(flag)
cout<<maxval<<endl;

else cout<<-1<<endl;
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