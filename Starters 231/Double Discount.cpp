#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,k;
    cin >>n>>k;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            int x = max(a[i],a[j]);
            int y = min(a[i],a[j]);
            int dis = min(x/2,100);
            int total = (x+y)-dis;
            if(total<=k){
                ans=max(ans,b[i]+b[j]);
            }
            
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