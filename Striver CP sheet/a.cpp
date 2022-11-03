#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	 
	   int color_count=0;
if(x!=0)
        color_count++;
if(y!=0) color_count++;
if(z!=0) color_count++;
if(x>1 && y>1) color_count++;
if(y>1 && z>1) color_count++;
if(x>1 && z>1)  color_count++;
cout<<color_count<<endl;
	}
	return 0;
}
