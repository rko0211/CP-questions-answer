#include<bits/stdc++.h>
using namespace std;
bool palindrome(string p, int start, int last)
{
 bool flag =0;
if(p[start]==p[last] && start<last)
{
    flag =1;
    palindrome(p,start+1,last-1);
}
else flag=0;
 return flag;
}


int main()
{
// String palindrome using recursion

string s;
cin>>s;
int n= s.size();
if(palindrome(s,0,n-1)) cout<<"The string is a palindrome \n";
else cout<<"The string is not a palindrome \n";
    return 0;
}