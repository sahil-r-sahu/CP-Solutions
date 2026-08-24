#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int zeros = 0;

    for (char ch : s)
    {
        if (ch == '0')
            zeros++;
    }

    if (zeros > 1 && zeros % 2 == 1)
        cout << "ALICE" << endl;
    else
        cout << "BOB" << endl;
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