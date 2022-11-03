#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        long long int a[n];
        for(int i =0;i<n;i++)
        cin>>a[i];
        while(q--)
        {
            int tz,x;
            cin>>tz>>x;
           
            
                if(tz==0)
                { 
                    for(int i =0;i<n;i++)
                    {
                        if(a[i]%2==0)
                        a[i]+=x;
                    }

                }
                else{
                       for(int i =0;i<n;i++)
                    {
                        if(a[i]%2==1)
                        a[i]+=x;
                    }
                }
                long long sum=0;
                for(int i=0;i<n;i++)
                {
                    sum+=a[i];
                }
                cout<<sum<<endl;
            
        }
    }
    return 0;
}