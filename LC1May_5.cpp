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

        vector<int> height(n);
        for (int i = 0; i < n; i++)
        {
            cin >> height[i];
        }
        ll mx = *max_element(height.begin(), height.end());
        sort(height.begin(), height.end(), greater<int>());
    }
    return 0;
}