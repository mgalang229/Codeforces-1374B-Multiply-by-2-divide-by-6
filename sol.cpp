#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n;
		cin >> n;
		int cnt = 0;
		// run a loop while 'n' is STRICTLY greater than 1
		while (n > 1) {
			// if 'n' is divisble by 6, then divide it by 6
			if (n % 6 == 0) {
				n /= 6;
			} else {
				// otherwise, multiply 'n' by 2
				n *= 2;
			}
			// increment the 'cnt' variable
			cnt++;
		}
		// check if the 'n' is equal to 1
		cout << (n == 1 ? cnt : -1) << '\n';
	}
	return 0;
}
