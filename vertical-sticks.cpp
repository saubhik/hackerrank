#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		
		cin >> n;
		int a[n], k;
		float ans = 0;
		
		for (int i = 0; i < n; i++) cin >> a[i];
		
		sort(a, a+n);
		
		for (int i = 0; i < n; i++) {
			if (i > 0  and a[i] == a[i-1]) ans += (float)(n+1) / (float)(k+1);
			else {
				k = n - i;
				ans += (float)(n+1) / (float)(k+1);
			}
		}
		
		cout << fixed << setprecision(2) << ans << endl;
	}
}
