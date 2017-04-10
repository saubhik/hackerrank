#include <iostream>
#include <map>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int a[n], b[n], s[n];
	map<int, int> myMap;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		myMap[a[i]] = i;
	}
	memcpy(s, a, sizeof(s));
	memcpy(b, a, sizeof(b));
	
	sort(s, s + n);
	
	int asc = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] != s[i]) {
			asc++;
			swap(a[i], a[myMap[s[i]]]);
		}
	}
	
	int desc = 0;
	for (int i = 0; i < n; ++i) {
		if (b[i] != s[n - i - 1]) {
			desc++;
			swap(b[i], b[myMap[s[n - i - 1]]]);
		}
	}
	
	cout << min(asc, desc);
}
