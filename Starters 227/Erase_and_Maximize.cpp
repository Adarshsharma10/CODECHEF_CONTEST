// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define all(v) (v).begin(), (v).end()

// void solve() {
//     int n,s;
//     cin>>n>>s;
//     int ans=0;

//     if (s <= 5 * n) {
//         ans = 6 * n;
//     } else {
//         ans = 11 * n - s;
//     }
//     cout<<ans<<endl;
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


// Successfully Submitted


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,s;
    cin>>n>>s;
    int ans=0;
    if(s<=5*n){
        ans=6*n;
    } 
    else{
        int rem = s%n;
        if(rem==0){
            cout<<5*n<<endl;
            return;
        }
        for(int i=1;i<=rem;i++){
            ans+=5;
        }
        for(int i=1;i<=n-rem;i++){
            ans+=6;
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