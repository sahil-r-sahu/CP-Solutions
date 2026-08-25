#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<long long> a(n);

    for (auto &x : a)
    {
        cin >> x;
    }

    vector<long long> v;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || a[i] != a[i - 1])
        {
            v.push_back(a[i]);
        }
    }

    if (v.size() <= 2)
    {
        cout << v.size() << '\n';
        return;
    }

    int ans = 2;

    for (int i = 1; i < v.size() - 1; i++)
    {
        long long d1 = v[i] - v[i - 1];
        long long d2 = v[i + 1] - v[i];

        if ((d1 > 0 && d2 < 0) ||
            (d1 < 0 && d2 > 0))
        {
            ans++;
        }
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();
}