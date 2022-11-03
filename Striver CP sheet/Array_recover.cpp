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
 int d[n];
for(int i=0;i<n;i++)
cin>>d[i];
int a[n];
a[0]=d[0];
int flag =0;
for(int i=1;i<n;i++)
{
if(d[i]==0)
{
    a[i]=a[i-1];
}
else{
    if((a[i-1]-d[i])>=0)
    {
        flag=1;
        break;
    }
    else 
    a[i]=a[i-1]+d[i];
}
}
if(flag==1) cout<<"-1"<<endl;
else {
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

 }

    return 0;
}