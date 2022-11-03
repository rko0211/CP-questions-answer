#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x=1;
    while(t--)
    {

int count =0;
int n;
cin>>n;
for(int i=1;i<=n;i+=4)
{
count++;
}

cout<<"case  #"<< x<< ":"<< count<<endl;
x++;
    }



    return 0;
}