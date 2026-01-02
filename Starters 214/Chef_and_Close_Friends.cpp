#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int x,y,z;
    cin >> x>>y>>z;
    int cf = 2*y;
    int cl = x-z;
    int cr = x+z;
    int fr = x+y;
    int fl = x-y;
    int diff = abs(max(cl,fl) - min(fr,cr));
    if(z==0){
        cout<<0<<endl;
        return;
    }
    cout<<diff<<endl;
    
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