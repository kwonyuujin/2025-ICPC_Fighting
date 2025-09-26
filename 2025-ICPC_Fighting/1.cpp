#include<iostream>
#include<vector>
using namespace std;
int dp[31][31];
int function(int n, int k) {
	for (int i = 0;i < n;i++) {
		dp[i][0] = 1;
	}

	for (int i = 0;i < n;i++) {
		dp[i][i] = 1;
	}

	for (int i = 1;i < n;i++) {
		for (int j = 1;j < n;j++) {
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]);
		}
	}
	return dp[n - 1][k - 1];

}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	cin >> n >> k;
	cout << function(n, k) << '\n';

}