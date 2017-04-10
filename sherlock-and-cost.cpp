#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	
	while (t--) {
		cin >> n;
		int b[n];
		for (int i = 0; i < n; i++) cin >> b[i];
		
		int s1[n], s2[n];
		s1[0] = 0;
		s2[0] = 0;
		
		for (int i = 1; i < n; i++) {
			s1[i] = max(s2[i-1] + b[i-1] - 1, s1[i-1]);
			s2[i] = max(s2[i-1] + abs(b[i] - b[i-1]), s1[i-1] + b[i] - 1);
		}
		
		cout << max(s1[n-1], s2[n-1]) << endl;
	}
}
