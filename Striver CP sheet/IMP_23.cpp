#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
int c=0;int res=0;
int i=1;
while(true)
{
if(abs(res-n)>n) break;;
c=c+i;
res=res+c;
n=n-res;
i++;
}
cout<<i-1;
    return 0;
}