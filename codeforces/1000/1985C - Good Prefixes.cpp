#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e18;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum = 0, lar = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
        lar = max(lar, ((ll)a[i]));

        if (sum % 2 == 0 && sum / 2 == lar)
        {
            ans++;
        }
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
    {
        solve();
    }
}