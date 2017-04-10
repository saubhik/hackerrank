#include <iostream>
#include <algorithm>
using namespace std;

int score (int arr[], int start, int end) {
	int size = end - start + 1;
	
	if (size == 1) return 0;
	
	int rightSum[size];
	rightSum[size - 1] = arr[end];
	for (int i = size - 2; i >= 0; --i)
		rightSum[i] = rightSum[i + 1] + arr[start + i];
	
	int leftSum = 0;
	for (int i = start; i <= end - 1; ++i) {
		leftSum += arr[i];
		if (leftSum == rightSum[i - start + 1])
			return max(1 + score(arr, start, i), 1 + score(arr, i+1, end));
	}
	
	return 0;
}

int main() {
	int t, n;
	cin >> t;
	
	while (t--) {
		cin >> n;
		int a[n];
		
		for (int i = 0; i < n; ++i) cin >> a[i];
		
		cout << score(a, 0, n-1) << endl;
	}
}
