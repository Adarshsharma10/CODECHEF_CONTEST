#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool flag = true;
        int count = 0;
        for(int i=0;i<n;i++){
            if(i== 0 && arr[0]%2!= 0){
                count++;
                continue;
            }
            else if(arr[i]%2 == 0){
               if(flag==true){
                    count++;
                    flag=false;
               }
            }
            else{
                if(flag==false){
                    count++;
                    flag=true;
                }
            }
        }
        cout<<count<<endl;
    }
}

//Successfully submitted