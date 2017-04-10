#include <iostream>
using namespace std;

int main() {
	int t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		int best[k+1] = {0};
		for (int i = 1; i < k + 1; i++) {
			int max = 0, temp;
			for (int j = 0; j < n; j++) {
				if (a[j] > i) temp = best[0];
				else temp = a[j] + best[i - a[j]];
				if (temp > max) max = temp;
			}
			best[i] = max;
		}
		cout << best[k] << endl;
	}
}

