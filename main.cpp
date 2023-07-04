#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int r,b,d;
		cin>>r>>b>>d;
		if(r!=b){
			if(d==0)
				cout<<"NO"<<endl;
			else{
				if(abs(r-b)>d){
					if(r==1||b==1){
						cout<<"NO"<<endl;
					}
					else
					cout<<"YES"<<endl;
				}
				else{
					cout<<"NO"<<endl;
				}
			}
		}
		else{
			if(d==0){
				cout<<"YES"<<endl;
			}
			else{
				if(abs(r-b)>d){
					cout<<"YES"<<endl;
				}
				else{
					cout<<"NO"<<endl;
				}
			}
		}	
	}
}
