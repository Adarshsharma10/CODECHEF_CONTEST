#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    
    vector<char> suffix_min(n);
    suffix_min[n - 1] = s[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suffix_min[i] = min(s[i], suffix_min[i + 1]);
    }

    string groupA = "";
    string groupB = "";
    vector<int> posA, posB;

    char lastA = 'a'; 
    for (int i = 0; i < n; i++) {
        
        if (s[i] >= lastA && (i == n - 1 || s[i] >= suffix_min[i + 1])) {
            groupA += s[i];
            posA.push_back(i);
            lastA = s[i];
        } else {
            groupB += s[i];
            posB.push_back(i);
        }
    }

    
    sort(groupB.begin(), groupB.end());

    string res = s;
    for (int i = 0; i < posA.size(); i++) res[posA[i]] = groupA[i];
    for (int i = 0; i < posB.size(); i++) res[posB[i]] = groupB[i];

    cout << res << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}

// Successfully submitted