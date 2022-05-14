#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        float mul = 0.143 * (float)n;
        float ans = pow(mul, n);
        // cout << ans << endl;
        int t = (int)ans;
        if ((ans - (float)t) < 0.5)
        {
            cout << (int)ans << endl;
        }
        else
        {
            cout << (int)ans + 1 << endl;
        }
    }
}