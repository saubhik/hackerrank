#include <iostream>
using namespace std;

bool contains(int elem, int arr[], int n) {
	for (int i = 0; i < n; i++)
		if (arr[i] == elem) {
			return true;
		}
	return false;
}

int main() {
	int n, d;
	cin >> n >> d;
	int a[n], res = 0;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n and a[i] <= a[n - 1] - 2 * d; i++) {
		if (contains(a[i] + d, a, n) and contains(a[i] + 2 * d, a, n)) {
			res++;
		}
	}
	cout << res << endl;
}
