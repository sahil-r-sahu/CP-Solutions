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
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            zero++;
        }
    }

    if (zero <= 1)
    {
        cout << -1 << endl;
    }
    else
    {
        if (a[0] == 1 & a[n - 1] == 1)
        {
            cout << 2 << endl;
        }
        else if (a[0] == 1 && a[n - 1] == 0 || a[0] == 0 && a[n - 1] == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
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