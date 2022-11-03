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
vector<string>v(n);
for(int i=0;i<n;i++) 
{
 cin>>v[i];   
}
int numberOfcount=0;
// last row check

    for(int j=0;j<m;j++)
    {
         if(v[n-1][j]=='D') numberOfcount++;
    }
   

// last colum check
for(int i=0;i<n;i++)
{

        if(v[i][m-1]=='R') numberOfcount++;
    
}
cout<<numberOfcount<<endl;
}

    return 0;
}