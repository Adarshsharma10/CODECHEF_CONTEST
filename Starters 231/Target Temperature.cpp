#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> b(n);
    for(int i=0;i<n;i++) cin>>b[i];

    map<int,int> freq;
    int max_val=-1;
    for(int i=0;i<n;i++){
        freq[b[i]]++;
        max_val=max(max_val,b[i]);

    }
    
    for(auto &x : freq){
        int f=x.first;
        int s=x.second;
        if(f<max_val && s>1){
            cout<<"NO"<<endl;
            return;
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

// Successfully Submitted
