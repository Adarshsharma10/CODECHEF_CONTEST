#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll n,k;
    cin >> n >>k;
    string s;
    cin>>s;
    for(ll i=0;i<n;i++){
        if(s[0]=='I'){
            for(ll q=0;q<n;q++){
                if(s[q]!='I'){
                    s[0]=s[q];
                    break;
                }
            }
        }
        if(s[i]=='I'){
            s[i]=s[i-1];
        }
            
    }
    ll c=0;
    for(ll i=1;i<n;i++){
        if(s[i-1]==s[i]){
            c++;
        }
    }
    if(s[0]==s[n-1]){
        cout<<(c*k)+k-1<<endl;
    }
    else{
        cout<<c*k<<endl;
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

// Successfully submitted