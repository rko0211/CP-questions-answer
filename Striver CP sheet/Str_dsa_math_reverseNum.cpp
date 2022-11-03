#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the number :";
cin>>n;
int x =n;
int reverseNum=0;
while(n)
{
// Extract last digit from the number n
int last_digit= n%10;
// Appending last digit with new variable reverseNum
reverseNum = reverseNum*10+last_digit;
n/=10;
}
cout<<"Reverse of the number "<<x<<" is "<<reverseNum<<endl;

    return 0;
}
