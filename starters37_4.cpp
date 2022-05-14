#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;

        vector<ll> h(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        ll multi = 0, single = 0;

        multi = *max_element(h.begin(), h.end());

        for (ll i = 0; i < n; i++)
        {
            single += ceil((float)h[i] / x);
        }

        cout << min(single, multi) << endl;
    }
    return 0;
}