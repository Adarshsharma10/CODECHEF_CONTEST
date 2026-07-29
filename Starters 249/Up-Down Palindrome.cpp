#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int max_L = 0;
    int min_R = 2e9; 
    bool has_mismatch = false;

    for (int i = 0; i < n / 2; i++) {
        int a = v[i];
        int b = v[n - 1 - i];

        if (a == b) continue; 

        if (abs(a - b) != 2) {
            cout << "NO\n";
            return;
        }

        has_mismatch = true;
        int m = min(a, b);
        max_L = max(max_L, m);
        min_R = min(min_R, m + 1);
    }

   
    if (!has_mismatch || max_L <= min_R) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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

// Successfully Submitted