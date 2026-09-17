#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if (m % n != 0)
    {
        cout << -1 << endl;
        return 0;
    }

    int x = m / n;
    int ans = 0;

    while (x % 2 == 0)
    {
        x /= 2;
        ans++;
    }

    while (x % 3 == 0)
    {
        x /= 3;
        ans++;
    }

    if (x == 1)
        cout << ans << endl;
    else
        cout << -1 << endl;

    return 0;
}