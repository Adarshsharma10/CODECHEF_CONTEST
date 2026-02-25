#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int a,b,x,y;
    cin >>a>>b>>x>>y;
    int k = a/x;
    if(k==0){
        cout<<a+b<<endl;
    }
    else{
        cout<<a+b+k*(y-x)<<endl;
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

// Successfully Submitted