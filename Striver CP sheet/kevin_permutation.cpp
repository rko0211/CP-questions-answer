#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int n ;
    cin>>n;


    for(int i=n/2+1;i<=n;i++)
    {
        if(i==n && (n%2)==1)
        cout<<i<<" ";

        else{
            cout<<i<<" "<<i-n/2<<" ";
        }
    }
    cout<<endl;
 

 }

    return 0;
}