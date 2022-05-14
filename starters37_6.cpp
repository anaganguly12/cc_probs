#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve();
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

void solve()
{
    ll n;
    cin >> n;

    ll a[n];
    ll z = 0, o = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            z++;
        }
        else
        {
            o++;
        }
    }
    if (z > o)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
    }
}