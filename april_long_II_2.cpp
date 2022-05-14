#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        int dis = (x * 10) / 100;

        cout << max(dis, 100) << endl;
    }
}