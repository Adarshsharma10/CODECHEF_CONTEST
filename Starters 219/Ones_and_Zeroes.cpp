#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    int co = 0;
    int cz = 0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            co++;
            if(co>=cz){
                ans++;
            }
        }
        else{
            cz++;
            if(co>=cz){
                ans++;
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