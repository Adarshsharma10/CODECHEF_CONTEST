#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(s) (s).begin(), (s).end()

void solve() {
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    vector<int> s;
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
        int speed = v[i].first/v[i].second;
        s.push_back(speed);
    }
    int idx = max_element(all(s))-s.begin();
    cout<<idx+1<<endl;
    return;


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