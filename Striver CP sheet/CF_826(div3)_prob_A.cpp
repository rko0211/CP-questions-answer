#include<bits/stdc++.h>
using namespace std;


int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    string a,b;
    cin>>a>>b;
  int c1=0,c2=0;
  int n1=a.size();
  int n2= b.size();
  for(int i =0,j=0;i<n1,j<n2;i++,j++)
  {
    if(a[i]=='X')
    c1++;
    if(b[i]=='X')
    c2++;
  }
  if(a[n1-1]=='S' && b[n2-1]=='M')
  cout<<"<"<<endl;
  else if(a[n1-1]=='S' && b[n2-1]=='L')
  cout<<"<"<<endl;
   else if(a[n1-1]=='M' && b[n2-1]=='L')
  cout<<"<"<<endl;
   else if(a[n1-1]=='L' && b[n2-1]=='S')
  cout<<">"<<endl;
   else if(a[n1-1]=='L' && b[n2-1]=='M')
  cout<<">"<<endl;
   else if(a[n1-1]=='M' && b[n2-1]=='S')
  cout<<">"<<endl;
  
  else{
    if(a[n1-1]=='S')
    {
        if(c1==c2)
        cout<<"="<<endl;
        else if(c1>c2)
        cout<<"<"<<endl;
        else cout<<">"<<endl;
    }
    else{
        if(c1==c2)
        {
            cout<<"="<<endl;
        }
        else if(c1>c2)
        cout<<">"<<endl;
        else cout<<"<"<<endl;
    }
  }
  
  

 }

    return 0;
}