#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int ans1 = x * 3;
        int ans2 = y * 2;

        cout << min(ans1, ans2) << endl;
    }
}