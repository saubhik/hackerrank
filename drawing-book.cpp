#include <iostream>
using namespace std;

int main() {
	int n, p;
	cin >> n >> p;
	
	int res1, res2;
	if (p % 2 == 1) res1 = (p - 1) / 2;
	else res1 = p / 2;
	if (n % 2 == 1) {
		if (p % 2 == 1) res2 = (n - p) / 2;
		else res2 = (n - p - 1) / 2;
	}
	else {
		if (p % 2 == 0) res2 = (n - p) / 2;
		else res2 = (n - p + 1) / 2;
	}
	
	cout << ((res1 < res2) ? res1 : res2) << endl;
}
