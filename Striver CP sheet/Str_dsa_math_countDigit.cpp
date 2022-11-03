// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter the number :";
// cin>>n;
// int count=0;
// while(n)
// {
//     count++;
//     n=n/10;
// }
// cout<<"The number of digit in "<< n <<"is "<<count;
//     return 0;
// }


// 2nd method ---> convert integer into string 

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"Enter the number :";
cin>>n;
string s = to_string(n);
int countDigit = s.length();
cout<<"The number of digit in "<<" "<< n <<" is "<<" "<<countDigit<<endl;

    return 0;
}

// Aother process is --> cont = floor(log10(n))+1