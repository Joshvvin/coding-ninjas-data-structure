#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int n, b,houses[100001];
//int dp[51][1501];

void solve() {
	cin >> n >> b;
	//memset(dp, 0, sizeof(dp));
	for(int i=0; i<n; ++i){
		cin>>houses[i];
	}
	sort(houses, houses+n);
	int ans=0;
	for(int i=0;i<n;i++){
		if(houses[i]<=b)
		{
			b-=houses[i];
			ans++;
		}	
	}
	
	cout << ans << "\n";
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
