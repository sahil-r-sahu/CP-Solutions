#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    s = " " + s;

    vector<bool> removed(n + 1, false);
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == '1')
        {
            removed[i] = true;
        }
    }
    ll cost = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            if (s[j] == '1')
            {
                break;
            }

            if (removed[j])
            {
                continue;
            }
            removed[j] = true;
            cost += i;
        }
    }

    cout << cost << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}