#include "bits/stdc++.h"
using namespace std;

int main(){
	/*#ifdef SIEVE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif*/
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1],s=0,s1=0,s2=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			s+=a[i];
			if(a[i]==2){
				s1++;
			}
			else{
				s2++;
			}
		}
		if(s%2!=0){
			cout<<"NO"<<endl;
		}
		else{
			if(s2==0&&s1%2!=0){
				cout<<"NO"<<endl;
			}
			else {
				cout<<"YES"<<endl;
			}
		}
	}
	
	return 0;
}
