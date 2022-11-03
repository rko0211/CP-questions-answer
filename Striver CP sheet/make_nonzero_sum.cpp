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
    vector<int>a;
    for(int i=0;i<n;i++)
    cin>>a[i];
    vector<pair<int,int>>sa;
    int ind=0;int segmentsum=0;     //Sum of individual segments
    int fullsum=0; 
    int prevsegment=-1;
    if(count(a.begin(),a.end(),1)==n || count(a.begin(),a.end(),-1)==n )
    {
        if(n%2==0)
        {
            cout<<1<<endl;
            cout<<1<<" "<<n<<endl;
            
        }
        else
        {
            cout<<-1<<endl;
        }
        continue;
    }
    for(int i=0;i<n-1;i++)
    {
        ind++;
        if(ind%2==1)
        {
            segmentsum+=a[i];
        }
        else{
            segmentsum-=a[i];
        }


        if(prevsegment==1)
        {
            fullsum+=segmentsum;
            segmentsum=0; 
             sa.push_back({i,i});
            ind=0;
            prevsegment=-1;
            continue;
        }
        sa.push_back({i,i});
            if(a[i]!=a[i+1])
        {
              prevsegment=ind%2;
              sa.back().second=i;
              fullsum+=segmentsum;
              segmentsum=0;
              continue;
        }
    }

    
}
    return 0;
}