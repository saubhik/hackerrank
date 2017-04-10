#include <iostream>
using namespace std;

int main() {
	int n, k, max = 0, height;
	cin >> n >> k;
	while (n--) {
		cin >> height;
		if (height > max) max = height;
	}
	if (max - k > 0) cout << max - k << endl;
	else cout << 0 << endl;
} 
