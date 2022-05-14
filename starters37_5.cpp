#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sol()
{
    ll n, m, x;
    cin >> n >> m >> x;

    if (m == x)
    {
        cout << 0 << endl;
    }
    else if (m < x)
    {
        cout << n << endl;
    }
    else
    {
        cout << (x * n) / (x + 1) << endl;
    }
}
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        sol();
    }
    return 0;
}