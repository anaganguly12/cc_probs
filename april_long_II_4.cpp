#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, c = 0;
        cin >> n;
        bool flag = true;
        ;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (ll i = 0; i < n; i++)
        {
            if (a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
                c++;
                if (c >= 2)
                {
                    flag = false;
                    break;
                }
            }
        }

        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else if (flag == false)
        {
            cout << "NO" << endl;
        }
    }
}