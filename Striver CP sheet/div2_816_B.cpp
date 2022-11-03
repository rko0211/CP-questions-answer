#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
int t;
cin>>t;
while(t--)
{
    
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    ll a[n];
    if(s<(k*b)||s>((k*b)+n*(k-1)))
    {
         cout<<-1<<endl;
         continue;
    }
    else
     {
        a[0]=k*b;
        // remaining sum 
        s=s-k*b;
        if(s>0)
        {
            a[0]=a[0]+min(k-1,s);
            s=s-min(k-1,s);
        }
     for(int i=1;i<n;i++)
     {
        if(s>0)
        {
            a[i]=min(k-1,s);
            s=s-min(k-1,s);
        }
        else {
            a[i]=0;
        }

     }

    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
   
    
}

    return 0;
}