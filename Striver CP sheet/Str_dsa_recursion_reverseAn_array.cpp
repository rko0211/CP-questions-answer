#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[],int n)
{
for(int i=0;i<n;i++)  cout<<arr[i]<<" ";

}

void reversearray(int arr[],int start,int end)
{
if(start<end)
{
    swap(arr[start],arr[end]);
    reversearray(arr,start+1,end-1);
}
}
int main()
{
int n;
cout<<"Enter the size of the array :";
cin>>n;
int a[n];
cout<<"Enter the array element :";
for(int i=0;i<n;i++)
cin>>a[i];
reversearray(a,0,n-1);
printarray(a,n);
    return 0;
}