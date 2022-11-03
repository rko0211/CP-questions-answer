#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int lcm(int x, int y)
{
    if(y==0) return x;
    return lcm(y,x%y);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {ll n;
    cin>>n;
    ll number_pair=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int lc = i*j/(__gcd(i,j));
            int gc = __gcd(i,j);

            if((lc/gc)<=3) number_pair++;
        }
    }
    cout<<number_pair<<endl;
    }



    return 0;
}