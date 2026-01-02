#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int one = 0,two = 0,three = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==1){
            one++;
        }
        else if(v[i]==2){
            two++;
        }
        else{
            three++;
        }
    }
    if(one>=three && two>=2){

        cout<<(two-1)+three<<endl;
    }
    else if(one<three && two>=2){
        cout<<(two-1)+one<<endl;
    }
    else if(one>=three){
        cout<<three<<endl;
    }
    else{
        cout<<one<<endl;
    }
    return;

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