#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
string s;     // encrypted string 
cin>>s;
vector<char>str;
int len =1;
int i=0;
while(i<n)
{
    str.push_back(s[i]);
    i+=(len++);
}
for(auto &it:str) cout<<it;
    return 0;
}