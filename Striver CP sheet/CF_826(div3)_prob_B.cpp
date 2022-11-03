#include <bits/stdc++.h>
using namespace std;
pair<int, int> f(int l, int r, vector<int> &ds, int &ans)
{
    if (l == r)
        return {ds[l], ds[r]};
    int mid = (r + l) / 2;
    // Binary search
    pair<int, int> a = f(l, mid, ds, ans);
    pair<int, int> b = f(mid + 1, r, ds, ans);
    if (a.second > b.first)
    {
        ans++;
        swap(a, b);
    }
    if (a.second == b.first - 1 && b.second - a.first == (r - l))
    {
        return {a.first, b.second};
    }
    else
    {
        ans = INT_MIN;
        return {a.first, b.second};
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int ans = 0;
    f(0, n - 1, v, ans);
    if (ans < 0)
        cout << -1 << endl;
    else
        cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }

    return 0;
}