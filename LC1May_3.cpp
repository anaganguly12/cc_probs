#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll total = n * 50;
        ll sugarcrane = (total * 20) / 100;
        ll salmint = (total * 20) / 100;
        ll rent = (total * 30) / 100;

        ll spend = (sugarcrane + salmint + rent);

        cout << total - spend << endl;
    }
    return 0;
}