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
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != s[i + 1])
            {
                c++;
            }
        }
        if (c > 0)
        {
            cout << c << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}