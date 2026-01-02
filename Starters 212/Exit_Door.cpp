#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int c=0;
        for(int i=n;i>=1;i--){
            int index = find(v.begin(),v.end(),i)-v.begin();
            c+=min(index,(int)v.size()-index-1);
            v.erase(v.begin()+index);
            
        }
        cout<<c<<endl;
    }
}

// Successfully submitted