#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;

    // Total sticks required:
    // k sticks for torches + k*y sticks for buying k coal
    ll need = k * (y + 1);

    // We start with 1 stick.
    // Each stick trade increases sticks by (x - 1).
    ll stickTrades = (need - 1 + (x - 2)) / (x - 1);

    // k trades to buy k coal
    ll answer = stickTrades + k;

    cout << answer << '\n';
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