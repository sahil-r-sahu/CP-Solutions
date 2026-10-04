#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll a, b;
    cin >> a >> b;

    int cntA = 0, cntB = 0;

    while (a % 2 == 0)
    {
        a /= 2;
        cntA++;
    }

    while (b % 2 == 0)
    {
        b /= 2;
        cntB++;
    }

    if (a != b)
    {
        cout << -1 << '\n';
        return;
    }

    int diff = abs(cntA - cntB);
    cout << (diff + 2) / 3 << '\n';
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