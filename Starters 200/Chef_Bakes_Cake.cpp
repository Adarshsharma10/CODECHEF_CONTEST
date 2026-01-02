#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,y;
	cin>>n>>x>>y;
	int z = y/x; // maximum no.of cakes so that chef can deliver at a time
    if(n%z==0){
		cout<<n/z<<endl;
	}
	else{
		cout<<n/z+1<<endl;
	}
	return 0;
}


//Successfully submitted