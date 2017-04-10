#include <iostream>
using namespace std;

long long int findM(int n) {
	if (n <= 3) return 1;
	else return (findM(n-4)*(n-3)+1);
}

long long int sieve(long long int n) {
	bool a[n+1];
	for (int i = 0; i < n+1; i++) a[i] = true;
	a[0] = false;
	a[1] = false;
	long long int count = 0;
	for (int i = 2; i < n+1; i++)
		if (a[i] == true) {
			count ++;
			for (int j = 2*i; j < n+1; j+=i) a[j] = false;
		}
	return count;
}
	

int main() {
	int t, n;
	cin >> t;
	
	while (t--) {
		cin >> n;
		cout << sieve(findM(n)) << endl;
	}
}
