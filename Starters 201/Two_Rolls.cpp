#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int diff=50-x;
        bool flag=false;
        for(int d1=y; d1<=y+5; d1++){
            for(int d2=y; d2<=y+5; d2++){
                if(d1+d2==diff){
                    flag=true;
                    break;
                }
            }
        }
        if(flag==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

//Successfully submitted