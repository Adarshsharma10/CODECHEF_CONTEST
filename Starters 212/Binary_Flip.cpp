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
        int c00 = 0, c11 = 0;

        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '0' && s[i + 1] == '0') c00++;
            else if (s[i] == '1' && s[i + 1] == '1') c11++;
        }
        if(c11>=c00){
            cout<<0<<endl;
        }
        else{
            int diff = abs(c00-c11);
            if(diff%2==0){
                cout<<diff/2<<endl;
            }
            else{
                cout<<diff/2+1<<endl;
            }
        }
    }
}

// Successfully submitted