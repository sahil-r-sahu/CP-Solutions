#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e18;

void solve()
{
    string s;
    cin >> s;
    int one = 0, zero = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            one++;
        }
        else
        {
            zero++;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            if (zero == 0)
            {
                cout << s.size() - (i) << endl;
                return;
            }
            else
            {
                zero--;
            }
        }
        else
        {
            if (one == 0)
            {
                cout << s.size() - (i) << endl;
                return;
            }
            else
            {
                one--;
            }
        }
    }
    cout << 0 << endl;
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