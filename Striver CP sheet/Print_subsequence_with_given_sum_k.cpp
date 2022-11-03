#include<bits/stdc++.h>
using namespace std;
void printSubsequence(int ind,int a[],int sum,int sum1,int n,vector<int>ans)
{
 if(ind==n)
 {
  if(sum1==sum)
  {
    for(auto &it:ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return;
  }
  return;
 }
 ans.push_back(a[ind]);
 sum1+=a[ind];
 printSubsequence(ind+1,a,sum,sum1,n,ans);
 sum1-=a[ind];
 ans.pop_back();
 printSubsequence(ind+1,a,sum,sum1,n,ans);
}
int main()
{
int arr[]={1,2,1,0,1,1};
int givensum=2;
int n=6;
int sum1=0;
vector<int>ans;
printSubsequence(0,arr,givensum,sum1,n,ans);
    return 0;
}