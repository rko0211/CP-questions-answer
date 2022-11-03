/*
#include<bits/stdc++.h>
using namespace std;
// Bruteforce approach---> O(n)
int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++)
if(n%i==0)
cout<<i<<" ";
    return 0;
}
*/

//  2nd  method --->T.C -> O(sqrt(n))
#include<bits/stdc++.h>
using namespace std;
// Bruteforce approach---> O(n)
int main()
{
int n;
cin>>n;
for(int i=1;i*i<=n;i++)
if(n%i==0)
{
    cout<<i<<" ";   
    if(i!=n/i)  cout<<n/i<<" ";
}
    return 0;
}