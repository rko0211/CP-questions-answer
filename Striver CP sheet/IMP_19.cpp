#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
multiset<char>st;
for(int i=0;i<s.size();i++)
{
    if(s[i]!='+')
    {
        st.insert(s[i]);
    }

}
for(auto it =st.begin();it!=st.end();it++)
{cout<<*it;
if(it!=(--st.end()))
cout<<"+";
}

    return 0;
}