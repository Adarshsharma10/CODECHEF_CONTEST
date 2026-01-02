#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    int c = 0;
    vector<int> v(n);
    for(int i=1;i<n;i+=2){
        v[i]=1;
        for(int k=1;k<n;k++){
            if(v[k-1]==0 && v[k]==0){
                c++;
            }
        }
    }
    cout<<c<<endl;
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