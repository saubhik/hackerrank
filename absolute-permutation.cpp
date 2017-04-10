#include <iostream>
using namespace std;

int main() {
	int t, n, k;
	cin >> t;
	
	while (t--) {
		cin >> n >> k;
		if (k != 0 and n % k != 0) cout << "-1\n";
		else {
			bool first = true;
			int m = 1, num = m * k + 1;
			while (num <= n) {
				cout << num << " ";
                num++;
				if (k != 0 and num % k == 0) {
					if (first) {
						m--;
						num = m * k + 1;
						first = false;
					}
					else {
						m += 3;
						num = m * k + 1;
						first = true;
					}
				}
			}
            cout << endl;
		}
	}
}
				
