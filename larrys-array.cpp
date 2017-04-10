#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	
	while (t--) {
		cin >> n;
		int a[n], count = 0;
		for (int i = 0; i < n; i++) cin >> a[i];
		
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				if (a[j] < a[i]) count++;
			}
		}
		
		if (count % 2 == 0) cout << "YES\n";
		else cout << "NO\n";
	}
}
