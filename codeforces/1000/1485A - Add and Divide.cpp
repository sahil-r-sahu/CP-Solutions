#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    ll a, b;
    cin >> a >> b;

    int ans = INT_MAX;

    for (int op1 = 0; op1 <= 32; op1++)
    {
        ll k = b + op1;

        if (k == 1)
        {
            continue;
        }

        ll x = a;
        int op2 = 0;

        while (x > 0)
        {
            x /= k;
            op2++;
        }

        ans = min(ans, op1 + op2);
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        solve();
}