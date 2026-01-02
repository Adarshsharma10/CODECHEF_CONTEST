#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> v(n);
        long long s=0;
        for(long long i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(int i=1;i<n;i++){
            if(v[i-1]==v[i]){
                swap(v[i],v[n-1]);
                break;
            }
        }

        for(long long i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}

// Successfully submitted