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
    vector<int> seen(n+1,false);
    vector<int> list;
    int ans=0;
    for(int i=0;i<n;i++){
        if(seen[v[i]]){
            ans+=2;
            for (int x : list) {
                seen[x] = false;
            }
            list.clear();
        }
        else{
            list.push_back(v[i]);
            seen[v[i]]=true;
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