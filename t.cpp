#include <bits/stdc++.h>
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


ll r,c;
int a[41][41], count=0,rs,ls;
void find(int x, int y){
	int i=x,j=y;
	for(;i<=r;i++){
		if(a[i][j]==1){
			rs++;
			for(;j<=c;j++){
				if(a[i][j]==1){
					ls++;
				}
				else 
					break;
			}
		}
		else 
			break;
	}
	if((rs==(ls*2))||(ls==(rs*2)))
		count++:
}
void solve() {
	cin >> r >> c;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			if(a[i][j]==1){
				rs=0;
				ls=0;
				find(i,j);
			}
		}
	}
	cout<<count<<endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, i=1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		++i;
	}
}






