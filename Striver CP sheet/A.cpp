#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        set<long> a;
        for (int i = 0; i < n; i++)
        {
            long b;
            cin >> b;
            a.insert(b);
        }
        if (a.size() % 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}