#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string table;
cin>>table;
std::vector<string>hand;
for(int i=0;i<5;i++)
{
    cin>>hand[i];
}
for(int i=0;i<5;i++)
{
    for(int j=0;j<2;j++)
    {
        if(hand[i][j]==table[0] || hand[i][j]==table[1])
    {
        cout<<"YES";
        return;
    }
    }
}

cout<<"NO";
return ;
}
int main()
{
solve();
    return 0;
}