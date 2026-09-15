#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(n);

    int mx_b = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = (a[i] + m - 1) / m;
        mx_b = max(mx_b, b[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (b[i] == mx_b)
        {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}