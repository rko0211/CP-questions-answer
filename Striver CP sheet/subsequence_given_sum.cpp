/*
#include<bits/stdc++.h>
using namespace std;
bool subsequenceSum(int i,int a[],vector<int>v, int s,int sum,int n)
{
    if(i>=n)
    {
        if(s==sum)
        {
            for(auto it:v) cout<<it<<" ";
          cout<<endl;
          return true;
        }
        return false;
    }
    // Pick / Take an element case 
    v.push_back(a[i]);
    s+=a[i];
 if(subsequenceSum(i+1,a,v,s,sum,n)) return true;
  
    v.pop_back();
      // Not pick / not take element case
    s-=a[i];
    if(subsequenceSum(i+1,a,v,s,sum,n)) return true;
    return false;
}
int main()
{
int arr[]={2,3,1};
int n=3;
int sum =2;
vector<int>v;
subsequenceSum(0,arr,v,0,sum,n);
    return 0;
}

*/
//  If there is multiple recursion call then we can use l,r..x,y,z number of function 


// Count how many number of subsequence are there in the array with given sum;

#include<bits/stdc++.h>
using namespace std;
int subsequenceSum(int i,int a[],vector<int>v, int s,int sum,int n)
{
    if(i==n)
    {
        if(s==sum)
        {
            return 1;
        }
        return 0;
    }
    // Pick / Take an element case 
    v.push_back(a[i]);
    s+=a[i];
 int l =subsequenceSum(i+1,a,v,s,sum,n);
    // Not pick / not take element case 
     s-=a[i];
    v.pop_back();
  
    int r = subsequenceSum(i+1,a,v,s,sum,n);
    return (l+r);
}
int main()
{
int arr[]={2,3,4,5,6,3,9,10};
int n=8;
int sum =9;
vector<int>v;
int res =subsequenceSum(0,arr,v,0,sum,n);
cout<<res<<endl;
    return 0;
}