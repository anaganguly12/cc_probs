#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll b, c;
        cin >> b >> c;

        cout << c / __gcd(b, c) << endl;
    }
}