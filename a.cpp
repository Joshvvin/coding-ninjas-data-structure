#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;	
//	cout<<t<<endl;
	while(t--){
		int n,mi,ma;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]==1){
				mi=i;
			}
			else if(a[i]==n){
				ma=i;
			}
		}
		if(mi>ma){
			swap(mi,ma);
		}
		cout<<min(ma,min(n-mi+1,mi+n-ma+1))<<endl;
	}
}
