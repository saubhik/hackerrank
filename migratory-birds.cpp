#include <iostream>
using namespace std;

int main() {
	int n, count[6] = {0}, max = 0, ans, temp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		count[temp] ++;
		if (count[temp] == max and temp < ans) {
			ans = temp;
		}
		if (count[temp] > max) {
			ans = temp;
			max = count[temp];
		}
	}
	cout << ans << endl;
}
