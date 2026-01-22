#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 105;
ll dp[N][N];
int A[N];
int n;

ll solve_dp(int i, int count) {

    if (i == n) return 0;
    

    if (dp[i][count] != -1) return dp[i][count];


    int current_watches = count + 1;

    ll ans = solve_dp(i + 1, current_watches);

    if (current_watches >= 1) {
        ans = max(ans, (ll)A[i] + solve_dp(i + 1, current_watches - 1));
    }


    if (current_watches >= 2) {
        ans = max(ans, 2LL * A[i] + solve_dp(i + 1, current_watches - 2));
    }

    return dp[i][count] = ans;
}

void solve() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            dp[i][j] = -1;
        }
    }

    cout << solve_dp(0, 0) << "\n";
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