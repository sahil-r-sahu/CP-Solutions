#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    vector<pair<int, int>> A, B, C;
    for (int i = 0; i < n; i++)
    {
        A.push_back({a[i], i});
        B.push_back({b[i], i});
        C.push_back({c[i], i});
    }

    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend());
    sort(C.rbegin(), C.rend());

    ll ans = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                int idxA = A[i].second;
                int idxB = B[j].second;
                int idxC = C[k].second;

                if (idxA != idxB &&
                    idxB != idxC &&
                    idxA != idxC)
                {
                    ans = max(ans, 1LL * A[i].first + B[j].first + C[k].first);
                }
            }
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