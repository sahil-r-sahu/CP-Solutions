#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int> &a, int idx, int sum)
{
    if (idx == a.size())
    {
        return sum % 360 == 0;
    }
    // Choose clockwise
    if (possible(a, idx + 1, sum + a[idx]))
    {
        return true;
    }

    // Choose counterclockwise
    if (possible(a, idx + 1, sum - a[idx]))
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (possible(a, 0, 0))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}