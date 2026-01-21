#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v){
        cin>>x;
    }
    vector<int> freq(n+1,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    
    int maxfreq=0;
    int ans=v[0];

    for (int i = 0; i < n; i++) {
        int color = v[i];

        if (freq[color] > maxfreq) {
            maxfreq = freq[color];
            ans = color;
        }
        else if (freq[color] == maxfreq) {
            ans = min(ans, color);
        }
    }
    cout<<ans<<endl;

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