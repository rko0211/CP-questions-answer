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
   
      int i=1;
      int j=n;
      while(i<j)
      {
        cout<<i<<" "<<j<<" ";
     
        i++;j--;
      }
       if(n%2==1)
       cout<<i<<" ";
       cout<<endl;
    }
    return 0;
}