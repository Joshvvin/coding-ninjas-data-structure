#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	string a;
	for(int i=0;i<s.length();i++){
		if(s[i]!=' '){
			a=a+s[i];
		}
	}
	int n=a.length();
	int r=(int)sqrt(n);
	int c=r+1,l=0;
	if(r*c<n){
		r++;
	}
	//cout<<r<<c<<endl;
	char p[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			p[i][j]=a[l++];	
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<p[i][j];
		}
		cout<<endl;
	}*/
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			cout<<p[j][i];
		}
		cout<<" ";
	}
}
