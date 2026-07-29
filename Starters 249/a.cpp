#include <iostream>
using namespace std;

void solve() {
    int x, y, z;
    cin >> x >> y >> z;

    if (z <= y) {
        cout << -1 << "\n";
    } else {
        int diff = z - y;
        int ans = (x + diff - 1) / diff;
        cout << ans << "\n";
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