#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // 1. Find min and max
    int min_val = *min_element(a.begin(), a.end());
    int max_val = *max_element(a.begin(), a.end());

    // 2. Count days that are neither min nor max
    int liked_days = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > min_val && a[i] < max_val) {
            liked_days++;
        }
    }

    cout << liked_days << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}