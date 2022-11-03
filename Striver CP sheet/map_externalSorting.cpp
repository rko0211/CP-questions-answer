// At first include header file 
#include<bits/stdc++.h>
using namespace std;
// Comparator function to sort pairs
// according to second value
bool cmp(pair<int, int>& a, pair<int, int>& b)
        
{
    return a.second > b.second;
}

void sort(map<int,int>&m)
{
    // Function to sort the map according
// to value in a (key-value) pairs

// Declear vectors of pair
vector<pair<int,int>>v;
 // Copy key-value pair from Map
    // to vector of pairs
for(auto &it:m)
{
    v.push_back(it);
}
// Sort using Comparator function
sort(v.begin(), v.end(), cmp) ;
// Print the sorted value
for(auto &itr:v)
{
    cout<<itr.first<<" "<<itr.second<<endl;
}
}
void printMap(map<int,int>m)
{
    // Using for loop we can print map
    for(auto &it:m)
    {  
        // By default map store all keys in ascending order according to which corresponding values are also stored .
        // it.first is the keys of the map 
        // it.second is the value corresponding to the key it.first . 
      
        cout<<it.first<<" "<<it.second<<endl;
    }
}
int main()
{
// decleration of map
map< int, int > m;
//  Initialisation of map
m[5] = 4;
m[8] = 10;
m[11] = 15;
m[6] = 20;
m[2] =3;
// Here 5, 8, 11, 6, 2 are the key of the map m and 4, 10, 15, 20, 3 are the value
// corresponding to the given kes .
 

printMap(m);             // This function is used to print key values of map m .
cout<<endl;
// Output of this function is 
/*
2  3
5  4
6  20
8  10
11 15
*/

// Now we will sort the map in Descending order according to the value in a (key-value) pairs . 


sort(m); // Function call

// After calling this function output is 
/*
6 20
11 15
8 10
5 4
2 3
map is being sorted in descending order according to tha value of (key-value) pair . 
*/


    return 0;
}