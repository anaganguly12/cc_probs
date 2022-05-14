#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    unordered_map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }

    ll c = 0, ans = 1;
    for (auto it : m)
    {
        if (it.second >= c)
        {
            c = it.second;
            ans = it.first;
        }
    }
    ll confused = 0;
    for (auto it : m)
    {
        if (it.second == c)
        {
            confused++;
        }
    }

    if (confused > 1)
    {
        cout << "CONFUSED" << endl;
    }
    else
    {
        cout << ans << endl;
    }
}
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}