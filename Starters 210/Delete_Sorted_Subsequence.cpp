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
        int balanced=0;
        int oper=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                balanced++;
            }
            else{
                if(balanced>0){
                    balanced--;
                }
                else{
                    oper++;
                }
            }
        }
        oper+=balanced;
        cout<<oper<<endl;
    }
}