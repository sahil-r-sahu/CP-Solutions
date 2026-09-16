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
    int sum = 0;
    vector<int> a(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    int rem = n % sum;
    if (rem == 0)
    {
        rem = sum;
    }

    for (int i = 0; i < 7; i++)
    {
        rem -= a[i];

        if (rem <= 0)
        {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}