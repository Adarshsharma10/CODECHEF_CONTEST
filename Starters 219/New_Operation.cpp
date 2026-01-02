#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()
const ll in = 1e18;

void solve(){ 
    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v) cin >> x;
    ll mini=v[0],maxi=v[0];
    int prod = 1;
    for(int i=1;i<n;i++){
        mini+=2*v[i];
        prod*=2;
        maxi+=prod*v[i];
    }
    cout<<mini<<" "<<maxi<<endl;
}



// void solve()
// {
//     int n;
//     cin >> n;
//     vector<ll> v(n);
//     for (auto &x : v)
//     {
//         cin >> x;
//     }

//     vector<vector<ll>> mn(n, vector<ll>(n, in));
//     vector<vector<ll>> mx(n, vector<ll>(n, -in));

//     for (int i = 0; i < n; i++)
//         mn[i][i] = mx[i][i] = v[i];

//     for (int k = 2; k <= n; k++)
//     {
//         for (int l = 0; l+k-1<n; l++)
//         {
//             int r =l+k-1;
//             for (int q = l; q < r; q++)
//             {
//                 mn[l][r] = min(mn[l][r],
//                                mn[l][q] + 2 * mn[q + 1][r]);
//                 mx[l][r] = max(mx[l][r],
//                                mx[l][q] + 2 * mx[q + 1][r]);
//             }
//         }
//     }

//     cout << mn[0][n-1] << " " << mx[0][n-1] << endl;
// }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// Successfully submitted
