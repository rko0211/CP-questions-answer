#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int n;
    cin>>n;
    string s;
    cin>>s; 
   
   int cntT=0,cnti=0,cntm=0,cntu=0,cntr=0;
  
   
        for(int i=0;i<n;i++)
        {
         if(s[i]=='T') cntT++;
         else if(s[i]=='i') cnti++;
         else if(s[i]=='m') cntm++;
         else if(s[i]=='u') cntu++;
         else if(s[i]=='r') cntr++;
        }
      
    if(s.size()==5 && cntT==1 && cnti==1 && cntm==1 && cntu==1 && cntr==1)  cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    
 }

    return 0;
}