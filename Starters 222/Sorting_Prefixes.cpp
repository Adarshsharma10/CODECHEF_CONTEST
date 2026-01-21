#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin>>x;
    int e = n;
    if(is_sorted(all(v))){
        cout<<0<<endl;
        return;
    }
    for(int i=n-1;i>=0;i--){
        if(v[i]==e){
            e--;
        }
        else{
            cout<<v[i]<<endl;
            return;
        }
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