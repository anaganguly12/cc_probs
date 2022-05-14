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

        int ans1 = (a * 100) / 10;
        int ans2 = (b * 100) / 20;

        if (ans1 > ans2)
        {
            cout << "FIRST" << endl;
        }
        else if (ans1 < ans2)
        {
            cout << "SECOND" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }
    }
}