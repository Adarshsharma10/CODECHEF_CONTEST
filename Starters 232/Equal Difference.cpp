#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    map<int, ll> counts;
    
    for(int i = 1; i <= n; i++) {
        int val;
        cin >> val;
        counts[val - i]++;
    }
    
    ll total_pairs = 0;
    for(auto const x  : counts) {
        int count = x.second;
        if(count >= 2) {
           
            total_pairs += (count * (count - 1)) / 2;
        }
    }
    
    cout << total_pairs << endl;
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