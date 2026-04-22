#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    for(int i=0;i<=n/2;i++){
        if(s[i]=='?' && s[n-1-i]=='?'){
            cout<<"NO"<<endl;
            return;
        }
        else if(s[i]!='?' && s[n-1-i]!='?'){
            if(s[i]!=s[n-1-i]){
                cout<<"NO"<<endl;
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