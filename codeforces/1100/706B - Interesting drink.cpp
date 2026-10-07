#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int q;
    cin >> q;
    vector<int> b(q);
    for (int j = 0; j < q; j++)
    {
        cin >> b[j];
    }

    for (int i = 0; i < q; i++)
    {
        int ub = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        cout << ub << endl;
    }
}