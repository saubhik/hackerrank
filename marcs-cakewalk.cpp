#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
	return b < a;
}

int main() {
	int n;
	cin >> n;
	
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	
	sort(a, a + n, cmp);
	
	long count = 0, mult = 1;
	for (int i = 0; i < n; i++) {
		count += mult * a[i];
		mult *= 2;
	}
	
	cout << count;
}
