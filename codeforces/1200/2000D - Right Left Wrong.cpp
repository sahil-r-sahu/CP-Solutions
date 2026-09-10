#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    string s;
    cin >> s;

    // Prefix sum
    vector<ll> pref(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + a[i];
    }

    int l = 0;
    int r = n - 1;

    ll ans = 0;

    while (l < r)
    {
        while (l < r && s[l] != 'L')
        {
            l++;
        }
        while (l < r && s[r] != 'R')
        {
            r--;
        }
        if (l >= r)
        {
            break;
        }
        ans += pref[r + 1] - pref[l];

        l++;
        r--;
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
    {
        solve();
    }

    return 0;
}