#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int sum=0;

    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    if(sum>=0){
        cout<<0<<endl;
    }
    else{
        for(int i=1;;i++){
            if(i*n+sum>=0){
                cout<<i<<endl;
                break;
            }
            
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