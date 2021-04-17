#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int cnt2 = 0;
		int cnt3 = 0;
		while (n % 2 == 0) {
			n /= 2;
			++cnt2;
		}
		while (n % 3 == 0) {
			n /= 3;
			++cnt3;
		}
		if (n == 1 && cnt2 <= cnt3) {
			cout << 2 * cnt3 - cnt2;
		} else {
			cout << -1;
		}
		cout << '\n';
	}
	return 0;
}
