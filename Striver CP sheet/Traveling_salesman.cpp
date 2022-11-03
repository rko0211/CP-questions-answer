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
int ans=0;
int maxX=0,maxY=0,minX=0,minY=0;
while(n--)
{
  int x;
  int y;
  cin>>x>>y;
maxX= max(x,maxX);
minX= min(x,minX);
maxY= max(y,maxY);
minY=min(y,minY);

}
cout<<2*(maxX+maxY -minX-minY)<<endl;;
}
    return 0;
}