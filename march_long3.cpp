#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string t;
        cin >> t;

        string m;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == t[i])
            {
                m[i] = 'G';
            }
            else
            {
                m[i] = 'B';
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            cout << m[i];
        }
        cout << endl;
    }
}