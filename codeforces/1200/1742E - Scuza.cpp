#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<ll> mx(n);
    mx[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        mx[i] = max(mx[i - 1], a[i]);
    }

    vector<ll> pref(n);
    pref[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }

    while (q--)
    {
        ll k;
        cin >> k;

        int l = 0, r = n - 1;
        int idx = n;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (mx[mid] > k)
            {
                idx = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (idx == 0)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << pref[idx - 1] << " ";
        }
    }

    cout << endl;
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