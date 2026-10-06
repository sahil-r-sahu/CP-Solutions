#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;

    int even_c = 0;
    int ans = INT_MAX;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            even_c++;
        }
        ans = min(ans, (k - a[i] % k) % k);
    }

    if (k == 4)
    {
        if (even_c >= 2)
        {
            ans = min(ans, 0);
        }
        else if (even_c == 1)
        {
            ans = min(ans, 1);
        }
        else
        {
            ans = min(ans, 2);
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
    {
        solve();
    }
}