#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
int t;

cin>>t;
while (t--)
{
 	    int n;
	    cin>>n;
	    ll a[n];
	    ll b[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n;i++)
	    cin>>b[i];
	    
	  vector<pair<int,int>>v;
	  for(int i=0;i<n;i++)
	  {
	      v.emplace_back(a[i],b[i]);
	  }
	  sort(v.begin(),v.end(),greater<>() );
	
	  int count=1;
	  for(int i=1;i<n;i++)
	  {       int c=0;
		if(v[i-1].first>v[i].first)
		{   
			for(int j=0;j<i;j++)
			{
				
				if(v[j].second<v[i].second)
				{
					
			c++;
				}
			}
		}
		if(c==i) count++;
	  }
cout<<count<<endl;
	
}


    return 0;
}