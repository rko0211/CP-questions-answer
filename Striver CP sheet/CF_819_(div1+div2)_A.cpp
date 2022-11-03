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
int a[n];
for(int i=1;i<=n;i++)
{
    cin>>a[i];
}
int maxval_indx=0,minval_indx=0;
int maxval=INT_MIN;
int minval=INT_MAX;
for(int i=1;i<=n;i++)
{
if(maxval<a[i])
{
    maxval=a[i];
    maxval_indx=i;
}
if(minval>a[i])
{
    minval=a[i];
    minval_indx=i;
}
}
if(minval_indx==1) cout<<maxval-a[minval_indx]<<endl;
else cout<<a[maxval_indx]-a[maxval_indx+1]<<endl;

}

    return 0;
}