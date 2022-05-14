#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int sum = a + b;
        int ans = 21 - sum;
        if (ans <= 10)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}