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
        int c1=0,c2=0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='0' && s[i+1]=='1'){
                c1++;
            }
            else if(s[i]=='1' && s[i+1]=='0'){
                c2++;
            }
        }
        if(c1==0 || c2==0){
            cout<<"BOB"<<endl;
        }
        // else if(c1==c2){
        //     cout<<"ALICE"<<endl;
        // }
        else{
            cout<<"ALICE"<<endl;
        }
    }
}

// Successfully submitted