#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    ll d = b - a;
    ll ans = 0;

    while (c > 0 && a <= d)
    {
        ans += d % a;
        a++;
        c--;
    }
    ans += c * d;
    cout << ans << endl;
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