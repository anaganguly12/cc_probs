#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, x, y, ans;
        cin >> n >> x >> y;

        if (n == 1)
        {
            cout << 0 << endl;
        }
        else if (x == y)
        {
            cout << (n * n) - 1 << endl;
        }
        else
        {
            ll total = 2 * (n - 1);
            ll c1 = min(x - 1, y - 1);
            ll c2 = min(n - x, n - y);
            ll c3 = min(x - 1, n - y);
            ll c4 = min(y - 1, n - x);

            ll ans = total + c1 + c2 + c3 + c4;
            cout << ans << endl;
        }
    }
    return 0;
}