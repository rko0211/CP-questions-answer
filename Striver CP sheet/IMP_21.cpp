#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
int n;
cin>>n;
ll a[n];
for(int i=0;i<n;i++)
cin>>a[i];

int i=0,j=1;
int res=1;           // One answer will always be because array size is 1 

while(j<n)
{
    if(a[j]>a[j-1] )
    {
        res = max(res,j-i+1);
          j++; 
    }
 
    else 
    {   i=j;
        j++;
      
       
    }
}
cout<<res;

    return 0;
}