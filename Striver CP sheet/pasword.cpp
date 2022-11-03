#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int nCr(int n, int r)
{
     return fact(n) / (fact(r) * fact(n - r));
}
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    // a are in asending order
    int count= (10-n);
     int  r = 2;
  int ans =nCr(count,r);
  cout<<(ans*6)<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}