#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int n,m;
    cin>>n>>m;
    vector<vector<int,int>>v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int x;
            cin>>x;
            v[j].push_back(x);
        }
    }

 }


    return 0;
}