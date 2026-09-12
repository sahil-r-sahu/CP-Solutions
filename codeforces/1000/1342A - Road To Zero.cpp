#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll x, y;
    cin >> x >> y;

    ll a, b;
    cin >> a >> b;

    ll ans;

    if (b < 2 * a)
    {
        ans = min(x, y) * b + abs(x - y) * a;
    }
    else
    {
        ans = (x + y) * a;
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

    return 0;
}