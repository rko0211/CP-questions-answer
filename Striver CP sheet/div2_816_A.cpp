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
    if(m>n)
    swap(n,m);    // for getting minimum answer
    
    if(n==1 && n==1)
    {
         cout<<0<<endl;
         continue;
    }
   
    else 
    cout<<2*(m-1)+(n-1)+1<<endl;
   
 }


    return 0;
}