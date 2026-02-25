#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(auto &x: v){
        cin>>x;
    }
    string s;
    cin>>s;
    int cnt=0;
    vector<int> tic;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            cnt++;
            tic.push_back(v[i]);
        }
    }
    if(cnt<k){
        cout<<-1<<endl;
        return;
    }
    sort(tic.begin(),tic.end());
    int cost=0;
    for(int i=0;i<k;i++){
        cost+=tic[i];
    }
    cout<<cost<<endl;
    
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