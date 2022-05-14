#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        if (n <= 3)
        {
            cout << 3 << endl;
        }
        else
        {
            cout << (n / 2) * 3 << endl;
        }
    }
    return 0;
}