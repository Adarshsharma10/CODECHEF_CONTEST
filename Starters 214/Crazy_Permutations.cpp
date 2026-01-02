#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(auto &x : a){
        cin>>x;
    }
    for(auto &x : b){
        cin>>x;
    }
    if(a==b){
        cout<<"YES"<<endl;
        return;
    }
    else{
       for (int i = 0; i < n - 1; i++) {
        int x = a[i] - a[i+1];
        int y = b[i] - b[i+1];

        
        if ((x > 0 && y < 0) || (x < 0 && y > 0)) {
            cout << "NO\n";
            return;
        }
        }
    }
    cout<<"YES"<<endl;

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