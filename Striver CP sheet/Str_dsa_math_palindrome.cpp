#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the number :";
cin>>n;
int x= n;  // One copy of variable n is stored in another variable x
int reverse=0;
while(n)
{
    int lastDigit = n%10;
    reverse = reverse*10+lastDigit;
    n/=10;
}
if(reverse == x)  cout<<"The number "<<x<<" is a palindrome"<<endl;
else cout<<"The number is not a palindrome number "<<endl;
    return 0;
}