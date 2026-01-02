#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int a,b;
    cin >>a>>b;
    float prs = (double)a/100;
    float prb = (double)b/225;
    if(prs>prb){
        cout<<"Large"<<endl;
    }
    else if(prs<prb){
        cout<<"Small"<<endl;
    }
    else{
        cout<<"Equal"<<endl;
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