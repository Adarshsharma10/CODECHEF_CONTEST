#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        int l=0,r=0;
        for(int j=0;j<n;j++){
            if(i<j){
                if(v[i]<v[j]){
                    r++;
                }
            }
            else if(i>j){
                if(v[i]>v[j]){
                    l++;
                }
            }
        }
        if(l==r){
            cnt++;
        }
    }
    cout<<cnt<<endl;
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