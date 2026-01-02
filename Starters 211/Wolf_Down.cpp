#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int birds = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                birds++;
            }
            else{
                break;
            }
        }
        cout<<birds<<endl;
    }
}

// Successfully submitted