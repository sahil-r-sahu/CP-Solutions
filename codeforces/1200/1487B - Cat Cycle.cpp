#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;

    if (n % 2 == 0)
    {
        cout << (k - 1) % n + 1 << '\n';
    }
    else
    {
        ll shift = (k - 1) / (n / 2);

        cout << (k - 1 + shift) % n + 1 << '\n';
    }
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