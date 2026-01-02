#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int se=0,so=0;
        vector<int> v;
        for(int i=x;i<=y;i++){
            if(i%x==0){
                v.push_back(i);
            }
        }
        for(int i=0;i<v.size();i++){
            if(v[i]%2==0){
                se+=v[i];
            }
            else{
                so+=v[i];
            }
        }
        if(se>=so){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

// Successfully submitted