//이거 시간초과 뜰 듯 
// Farm
#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b, n, w;
	cin >> a >> b >> n >> w;

	double x = (w - b * n) / (a - b);
	double y = (a * n - w) / (a - b);

	if (x != int(x) || y != int(y)) {
		cout<< -1 <<'\n';
		return 0;
	}

	if (x >= 1 && y >= 1) cout << x << " " << y << '\n';
	else cout << -1 << '\n';

}