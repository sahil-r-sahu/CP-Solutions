#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl '\n'

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<int> c(n);
    for (int i = 0; i < n; i++)
    {
        c[i] = b[i] - a[i];
    }

    sort(c.begin(), c.end());
    int i = 0, j = n - 1;
    int group = 0;
    while (i < j)
    {
        if (c[i] + c[j] >= 0)
        {
            group++;
            i++;
            j--;
        }
        else
        {
            i++;
        }
    }

    cout << group << endl;
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

    return 0;
}
