#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c1=0,c2=0;
        int count=0;
        string s;
        cin>>s;
        for(int i = 0;i<n;i++){
            if(s[i] == '1'){
                c1=i;
                break;
            }
        }
        for(int j = n-1;j>=0;j--){
            if(s[j] == '1'){
                c2=j;
                break;
            }
        }
        for(int i = c1+1;i<c2;i++){
            if(s[i] == '0'){
                count++;
            }
        }
        cout<<count<<endl;
        
    }

}
//Successfully submitted