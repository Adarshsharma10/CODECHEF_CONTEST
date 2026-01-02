#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a!=b){
            cout<<a+b<<endl;
        }
        else{
            if(a==1){
                cout<<1<<endl;
            }
            else{
                cout<<a+a-1<<endl;
            }
        }
    }
}

// Successfully submitted