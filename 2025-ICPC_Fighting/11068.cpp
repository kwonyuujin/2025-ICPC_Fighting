////11068 회문인 수
//#include<iostream>
//#include<string>
//using namespace std;
//
//static bool isPalindrome(int n) {
//
//	int num = n;
//	if (num == 0) return true;
//
//	for (int i = 2;i <= 64;i++) {
//		int num = n;
//		string str;
//
//		while (num) {
//			str.push_back(num % i);
//			num = num / i;
//		}
//
//		string rts; //str 리버스
//
//		for (int i = str.length() - 1;i >= 0;i--) {
//			rts += str[i];
//		}
//
//		if (str == rts) return true;
//	}
//		return false;
//}
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		cin >> n;
//
//		cout << isPalindrome(n) << '\n';
//	}
//}