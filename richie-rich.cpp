#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	string s, ans;
	cin >> s;
	ans = s;
	bool changed[n] = {false};
	for (int i = 0; i < n / 2; i++) {
		if (s[i] != s[n - i - 1]) {
			ans[i] = s[i] > s[n - i - 1] ? s[i] : s[n - i - 1];
			ans[n - i - 1] = ans[i];
			if (s[i] != ans[i]) changed[i] = true;
			else changed[n - i - 1] = true;
			k--;
		}
	}
	if (k < 0) cout << "-1";
	else {
		int i = 0;
		while (k > 0 and i < n / 2) {
			if (ans[i] != '9') {
				ans[i] = '9';
				if (!changed[i]) k--;
			}
			if (k > 0 and ans[n - i - 1] != '9') {
				ans[n - i - 1] = '9';
				if (!changed[n - i - 1]) k--;
			}
			i++;
		}
		cout << ans;
	}
}
