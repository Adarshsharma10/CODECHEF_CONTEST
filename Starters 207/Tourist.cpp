#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int x,y;
        int ans;
        int s =INT_MAX;
        for(int i = 1;i <=n ; i++){
            cin>>x>>y;
            int ans = abs(a-x) + abs(b-y);
            if(s>ans){
                s=ans;
            }
        }
        cout<<s<<endl;
    }
          

}
            

//Successfully submitted