#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll n,m;
    cin>>n>>m;
    int a,b;
    if(n>m){
        cout<<"NO"<<endl;
    }
    else if(n==m){
        cout<<"YES"<<endl;
    }
    else{
        if(3*n<m){
            cout<<"NO"<<endl;
        }
        else{
            if((3*n-m)%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
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

// Successfully submitted