#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll x, y, p;
    cin >> x >> y >> p;

   
    if (x * y >= p) {
        cout << 0 << "\n";
        return;
    }

    ll min_moves = LLONG_MAX;

    for (ll new_x = x; new_x <= max(x, p); new_x++) {
        ll req_y = (p + new_x - 1) / new_x;
        

        ll new_y = max(y, req_y);
        
        ll moves = (new_x - x) + (new_y - y);
        min_moves = min(min_moves, moves);
    }

    cout << min_moves << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}