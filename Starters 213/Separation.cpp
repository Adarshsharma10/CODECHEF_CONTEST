#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }


    bool hL = false, hE = false, hG = false;

    for (int i = 0; i < n; i++) {
        if (v[i] < x) hL = true;
        else if (v[i] == x) hE = true;
        else hG = true;
    }

    if (hE || !hL || !hG) {
        cout << "YES"<<endl;
    } else {
        cout << "NO"<<endl;
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
