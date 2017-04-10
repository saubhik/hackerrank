#include <iostream>
#include <cmath>
using namespace std;

int digits(long n) {
	int res = 0, m = 10;
	while (n > 0) {
		res ++;
		n /= m;
	}
	return res;
}

int main() {
	long p, q;
	long square, first, second, power;
	cin >> p >> q;
	bool exists = false;
	for (long i = p; i <= q; i++) {
		square = i * i;
		power  = (long)pow(10, digits(i));
		first = square % power;
		second = square / power;
		if (first + second == i) {
			cout << i << " ";
			exists = true;
		}
	}
	if (!exists) cout << "INVALID RANGE";
	cout << endl;
}
