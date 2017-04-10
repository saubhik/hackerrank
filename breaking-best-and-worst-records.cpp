#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long a[n], max, min, minCount = 0, maxCount = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (i == 0) {
			min = a[i];
			max = a[i];
		}
		if (a[i] > max) {
			max = a[i];
			maxCount ++;
		}
		if (a[i] < min) {
			min = a[i];
			minCount ++;
		}
	}
	cout << maxCount << " " << minCount << endl;	
}
