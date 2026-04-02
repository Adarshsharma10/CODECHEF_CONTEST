#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    int m = a.size();
    if (m == 1)
    {
        while (q--)
        {
            ll x;
            cin >> x;
            cout << x << endl;
        }
        return;
    }

    vector<ll> gaps;
    for (int i = 1; i < m; i++)
    {
        gaps.push_back(a[i] - a[i - 1]);
    }
    sort(gaps.begin(), gaps.end());

    int num_gaps = gaps.size();
    vector<ll> pref(num_gaps + 1, 0);
    for (int i = 0; i < num_gaps; i++)
    {
        pref[i + 1] = pref[i] + gaps[i];
    }

    while (q--)
    {
        ll x;
        cin >> x;

        int idx = lower_bound(gaps.begin(), gaps.end(), x) - gaps.begin();

        ll ans = x + pref[idx] + (ll)(num_gaps - idx) * x;

        cout << ans << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}