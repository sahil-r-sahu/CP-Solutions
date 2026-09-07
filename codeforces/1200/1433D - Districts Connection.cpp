#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int idx = -1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[0])
        {
            idx = i;
            break;
        }
    }

    if (idx == -1)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[0])
        {
            cout << 1 << " " << i + 1 << endl;
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[0])
        {
            cout << idx + 1 << " " << i + 1 << endl;
        }
    }
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
