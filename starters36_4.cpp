#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        ll n;
        cin >> n;

        cout << (n / 5) * 4 + (n % 5) << endl;
    }
}