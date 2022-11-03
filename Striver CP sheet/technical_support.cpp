#include<iostream>
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
    string s;
    cin>>s;
   
    stack<char>st;
    bool flag=true;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
    if(s[i]=='Q')
    cnt++;
    if(s[i]=='A')
    cnt--;
    if(cnt<0)
    cnt=0;
    }
    if(cnt==0)
    cout<<"Yes"<<endl;
    else{
        cout<<"No"<<endl;
    }
}
    return 0;
}