#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> sums = {0};
    for (int x : a)
    {
        vector<int> next;
        for (int sum : sums)
        {
            next.push_back(sum + x);
            next.push_back(sum - x);
        }

        sums = next;
    }

    for (int sum : sums)
    {
        if (sum % 360 == 0)
        {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
}