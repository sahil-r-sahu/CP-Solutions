#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    ll a, b;
    cin >> a >> b;

    ll s = a + b;
    ll num = 0;

    bool smaller = false;

    for (int i = 30; i >= 0; i--)
    {
        bool ab = (a >> i) & 1;
        bool sb = (s >> i) & 1;

        if (smaller)
        {
            if (sb)
            {
                num |= (1LL << i);
            }
        }
        else if (ab)
        {
            if (sb)
            {
                num |= (1LL << i);
            }
            else
            {
                smaller = true;
            }
        }
    }

    cout << s << " " << a - num << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        solve();
    }
}