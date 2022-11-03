// Bruteforce approach T.C --> 0(N)
/*
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{ 
    int i;
    int res;
for(i=1;i<= min(a,b);i++)
{
    if(a%i==0 && b%i==0)
    res =i;
}
return res;
}

int main()
{
int num1,num2;
cout<<"Enter two number : ";
cin>>num1>>num2;
int res = gcd(num1,num2);
cout<<"The GCD/HCF of two number "<<num1<<" and " <<num2 << " is :"<<res<<endl;
    return 0;
}
*/
// Euclide GCD


#include<bits/stdc++.h>
using namespace std;
int gcd(int n1, int n2)
{
if(n2==0)  return n1;
return gcd(n2,n1%n2);

}

int main()
{
int num1,num2;
cout<<"Enter two number : ";
cin>>num1>>num2;
int res = gcd(num1,num2);
cout<<"The GCD/HCF of two number "<<num1<<" and " <<num2 << " is :"<<res<<endl;
    return 0;
}

