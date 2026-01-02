#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    if(n==2){
        cout<<-1<<endl;
        return;
    }
    int s = n-2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==n-1){
                cout<<1<<" ";
            }
            else if(j<s){
                cout<<0<<" ";
            }
            else if(j==n-2 && i>2){
                cout<<0<<" ";
            }
            else{
                cout<<1<<" ";
            }
        }cout<<endl;
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
