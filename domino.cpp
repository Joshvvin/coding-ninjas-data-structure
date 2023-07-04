#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k1,k2;
		cin>>n>>k1>>k2;
		int w,b;
		cin>>w>>b;
		if(k1+k2==n*2){
			cout<<"YES"<<endl;
		}
		else{
			if(k1+k2<=n){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
		}
	}
	return 0;
}
