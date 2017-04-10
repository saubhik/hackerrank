#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	
	sort(a, a + n);
	
	int mad = abs(a[1] - a[0]);
	for (int i = 2; i < n; i++) {
		if (abs(a[i] - a[i-1]) < mad)
			mad = abs(a[i] - a[i-1]);
	}
	
	cout << mad;
}
