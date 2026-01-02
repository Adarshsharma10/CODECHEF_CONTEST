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
        int c=0;
        int x;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                x=i;
                break;
            }
        }
        for(int i=x;i<n-1;i++){
            if(s[i+1]=='1'){
                c++;
            }
            
        }
        cout<<c<<endl;
    }
}

// Successfully submitted