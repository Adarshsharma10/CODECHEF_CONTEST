#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int sum=0;
        int customer=0;
        for(int i=x;i<=n;i++){
            sum+=i;
            customer++;
        }
        cout<<sum-customer*x<<endl;

    }
}

// Successfully submitted