#include<bits/stdc++.h>
using namespace std;
// Armstrom number --> those number whose  sum of digits raised to power number of digit in original number is equal to original num 
// 153 ---> number of digit =3; 1^3 + 5^3 + 3^3
bool armStromnum(int n)
{
    int countDigit=0;
    int originalNum = n;
    int temp =n;
    int sumOfpower=0;
    while(temp)
    {
       countDigit++;
      temp = temp/10;
    }
while(n)
{
  int digit = n%10;
  sumOfpower =sumOfpower + pow(digit,countDigit);
  n=n/10;
}
return (sumOfpower==originalNum);
}


int main()
{
    int n;
    cin>>n;
   if(armStromnum(n))   cout<<"Yes,it is Armstrom number "<<endl;
   else cout<<"No it is not a Armstrom number "<<endl;

    return 0;
}

// If all number is same or equal then only we get minimum lcm ;
// Highest count of any element must be (n+1)/2;
