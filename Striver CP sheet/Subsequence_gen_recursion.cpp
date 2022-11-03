#include<bits/stdc++.h>
using namespace std;
void subsequeNce(int i,int v[],vector<int>dc,int n)
{
    if(i>=n) 
    {
       for(auto it:dc)
       cout<<it<<" ";
       cout<<endl;
       if(dc.size()==0)  cout<<"{ }";
       cout<<endl;
        return ;
    }
    else {
        
        subsequeNce(i+1,v,dc,n);    // this is the case of take/pick
        dc.push_back(v[i]);
         
         subsequeNce(i+1,v,dc,n);  // this is the case of not take
      dc.pop_back();
      
          
    }
}
int main()
{
    int n=3;
int v[]={3,2,1};
  vector<int>dc;
  
 subsequeNce(0,v,dc,n);

return 0;
}