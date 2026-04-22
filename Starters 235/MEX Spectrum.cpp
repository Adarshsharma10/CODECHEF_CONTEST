#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()


void solve() {
    int n;
    cin >> n;
    vector<int> freq(n + 2, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x <= n) freq[x]++;
    }

    int current_mex = 0;
    while (freq[current_mex] > 0) {
        current_mex++;
    }


    int gaps = 0;

    for (int k = 0; k <= n; k++) {
        if (k < current_mex) {
            cout << freq[k];
        } else if (k == current_mex) {

            cout << 0;
        } else {
            if (k > 0 && freq[k-1] == 0) gaps++;

            if (freq[k] == 0) {
              
                cout << gaps;
            } else {
               
                cout << max(gaps, freq[k]);
            }
        }
        if(k!=n){
            cout<<" ";
        }
    }
    cout <<endl;;
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

// Successfully submitted