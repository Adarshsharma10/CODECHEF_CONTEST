#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool can_survive(long long days, int M, const map<int, int>& freq) {
    if (days == 0) return true;
    
    long long total_people_supported = 0;
    for (auto const& x : freq) {
        int units = x.first;
        int count = x.second;
       
        total_people_supported += (long long)(units / days) * count;
        
        if (total_people_supported >= M) return true;
    }
    return total_people_supported >= M;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    if (!(cin >> N >> M)) return 0;

    map<int, int> freq;
    int max_units = 0;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        freq[a]++;
        if (a > max_units) max_units = a;
    }


    int low = 0, high = max_units;
    int ans = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (can_survive(mid, M, freq)) {
            ans = mid; 
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}