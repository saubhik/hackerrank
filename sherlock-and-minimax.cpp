#include <iostream>
#include <algorithm>
using namespace std;

int binSearch(int a[], int n, int num, int left, int right) {
	if (right <= left) {
	    if (num < a[left]) return -1;
	    else return left;
	}
	int mid = left + (right - left) / 2;
	if (num == a[mid]) return mid;
	else if (num < a[mid]) return binSearch(a, n, num, left, mid - 1);
	else {
	    if (mid + 1 < n and num < a[mid + 1]) return mid;
	    else return binSearch(a, n, num, mid + 1, right);
	}
}

int lBinarySearch(int a[], int num, int n) {
	return binSearch(a, n, num, 0, n - 1);
}

int main() {
	int n;
	cin >> n;
	int a[n], p, q;
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	cin >> p >> q;

	int minNum, maxMinDiff = -1, minDiff;
	for (int i = p; i <= q; i++) {
		int low = lBinarySearch(a, i, n);
		if (low == -1) minDiff = a[0] - i;
		else if (low == n - 1) minDiff = i - a[n - 1];
		else minDiff = min(i - a[low], a[low + 1] - i);
		if (minDiff > maxMinDiff) {
			maxMinDiff = minDiff;
			minNum = i;
		}
	}

	cout << minNum << "\n";
}
