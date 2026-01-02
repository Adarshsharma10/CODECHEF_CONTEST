#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int w,p,k;
        cin>>w>>p>>k;
        if(k>w){
            int pc=k-w;
            cout<<2*w+pc<<endl;
        }
        else{
            cout<<2*k<<endl;
        }
    }
}

// Successfull submitted