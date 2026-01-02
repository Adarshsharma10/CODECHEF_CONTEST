// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define all(v) (v).begin(), (v).end()

// void solve() {
//     int n;
//     cin >> n;
//     vector<ll> v(n);
//     vector<ll> diff;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//         if(i>=1 && i<=n-1){
//             diff.push_back(v[i]-v[i-1]);
//         }
//     } 
//     sort(diff.begin(),diff.end());

//     int eq = v[n-1]-v[0]+diff[0];
//     if(eq%diff[0]==0){
//         cout<<eq/diff[0]-n<<endl;
//     }
//     else{
//         cout<<v[n-1]-n<<endl;
//     }

// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> diff;

    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(i >= 1){
            diff.push_back(v[i] - v[i-1]);
        }
    }

    ll g = diff[0];
    for(int i = 1; i < diff.size(); i++){
        g = __gcd(g, diff[i]);
    }

    ll ans = 0;
    for(int i = 0; i < diff.size(); i++){
        ans += diff[i] / g - 1;
    }

    cout << ans << endl;
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