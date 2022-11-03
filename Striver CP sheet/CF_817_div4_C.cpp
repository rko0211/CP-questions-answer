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
vector<string>v[3];

map<string,int>m;
for(int i=0;i<3;i++)
{
    v[i].resize(n);
for(int j=0;j<n;i++)
{
cin>>v[i][j];
m[v[i][j]]++;
}
}

int pf[3]={0};

for(int i=0;i<3;i++)
{
    for(int j=0;j<n;j++)
    {
        if(m[v[i][j]]==1) pf[i]+=3;
        else if(m[v[i][j]]==2) pf[i]+=1;
    }
}
cout<<pf[0]<<" "<<pf[1]<<" "<<pf[2]<<endl;

    }



    return 0;
}