#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, q;
    cin >> n >> q;

    string a, b;
    cin >> a >> b;

    vector<array<int, 26>> prefA(n + 1), prefB(n + 1);

    for (int i = 0; i < n; i++)
    {
        prefA[i + 1] = prefA[i];
        prefB[i + 1] = prefB[i];

        prefA[i + 1][a[i] - 'a']++;
        prefB[i + 1][b[i] - 'a']++;
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        int ans = 0;

        for (int c = 0; c < 26; c++)
        {
            int freqA = prefA[r][c] - prefA[l - 1][c];
            int freqB = prefB[r][c] - prefB[l - 1][c];

            if (freqA > freqB)
            {
                ans += freqA - freqB;
            }
        }

        cout << ans << '\n';
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