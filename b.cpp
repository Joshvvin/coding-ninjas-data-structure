#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
 	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long int a[n*2+1];
		for(int i=1;i<=n*2;i++){
			cin>>a[i];
		}
		bool f=false;
		do{
			for(int i=1;i<=n*2;i++){
				if(i==1){
					if(a[i]==(a[n*2]+a[i+1])/2){
						int temp=a[i];
						a[i]=a[i+1];
						a[i+1]=temp;
					}
				}
				else if(i==n*2){
					if(a[i]==(a[i-1]+a[1])/2){
						int temp=a[i];
						a[i]=a[i-1];
						a[i-1]=temp;
					}
				}
				else{
					if(a[i]==(a[i-1]+a[i+1])/2){
						int temp=a[i];
						a[i]=a[i+1];
						a[i+1]=temp;
					}	
				}
			}
			for(int i=1;i<=n*2;i++){
				if(i==1){
					if(a[i]!=(a[n*2]+a[i+1])/2){
						f=false;
						break;
					}
				}
				else if(i==n*2){
					if(a[i]!=(a[1]+a[i-1])/2){
						f=false;
						break;
					}
				}
				else{
					if(a[i]!=(a[i-1]+a[i+1])/2){
						f=false;
						break;
					}
				}
			}
		}while(!f);
		int i;
		for(i=1;i<n*2;i++){
			cout<<a[i]<<" ";
		}
		cout<<a[i]<<endl;
	}	
}
