#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, holiday;
        cin >> n;

        if (n < 6)
        {
            cout << 0 << endl;
        }
        else
        {
            holiday = (n + 1) / 7;
            cout << holiday << endl;
        }
    }
}