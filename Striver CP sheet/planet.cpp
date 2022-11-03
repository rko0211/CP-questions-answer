#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
{
    int n,c;
    cin>>n>>c;
    int a[n];
    for(int i=1;i<=n;i++)
    cin>>a[i];
   vector<int>frq(101,0);
   
    for(int i=1;i<=n;i++)
    {
        frq[a[i]]++;
    }
    int cost=0;
    for(auto &it:frq)
    {
        cost+=min(it,c);
    }
    cout<<cost<<endl;

}

    return 0;
}