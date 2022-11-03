#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int x=0;
    vector<int>v;
    // We have to find out such permutation where the final value of x is mximum
for(int i=n-2;i>=1;i--)
{
    v.push_back(i);
}
v.push_back(n-1);
v.push_back(n);
if(n&1)
{
    swap(v[0],v[1]);
}

    for(auto &it:v)
    cout<<it<<endl;
}

    return 0;
}