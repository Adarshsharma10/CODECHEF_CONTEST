#include <bits/stdc++.h>
#include <numeric>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> players;
        for(int i=1;i<=n;i++){
           int g = __gcd(i, n);
           players.push_back({g,i});

        }
        sort(players.begin(),players.end(),[](pair<int,int> a,pair<int,int> b){
            if(a.first != b.first){
                return a.first>b.first;
            }
            return a.second < b.second;
        });

        for(auto p: players){
            cout<<p.second<<" ";
        }cout<<endl;
    } 
}
// Successfully submitted