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

        int ans;
        if (n % 10 == 0)
        {
            ans = n / 10;
            cout << ans << endl;
        }
        else if (n % 10 != 0)
        {
            ans = (n / 10) + 1;
            cout << ans << endl;
        }
    }
}