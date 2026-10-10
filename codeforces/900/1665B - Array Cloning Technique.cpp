#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    int mx = 0;

    for (auto it : freq) {
        mx = max(mx, it.second);
    }

    int ans = 0;

    while (mx < n) {
        int take = min(mx, n - mx);
        ans += 1 + take;
        mx += take;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}