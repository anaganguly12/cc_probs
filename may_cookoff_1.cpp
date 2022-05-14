#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll x, y, z;
        cin >> x >> y >> z;

        if ((x + y) <= z)
        {
            cout << 2 << endl;
        }
        else if (x <= z && y > z)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}