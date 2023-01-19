#include <bits/stdc++.h>
using namespace std;

/*

every possible rating increments starts from 0

*/

void test_case(int tc) {
	int n;
	cin >> n;
	set<int> s = {0};
	for (int x = 1; x * x <= n; x++) {
		s.insert(n / x);
		s.insert(n / (n / x));
	}
	cout << s.size() << "\n";
	for (int num : s) {
		cout << num << " ";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case(tc);
	}
}
