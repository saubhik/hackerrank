#include <iostream>
#include <cmath>
using namespace std;

#define MOD 1000000007
typedef long long ll;

ll fast_exp (ll base, int exp) {
	ll res = 1;
	while (exp > 0) {
		if (exp % 2 == 1) res = (res * base) % MOD;
		base = (base * base) % MOD;
		exp /= 2;
	}
	return (res % MOD);
}		

int main() {
	int t, n, m;
	cin >> t;
	
	while (t--) {
		cin >> n >> m;
		ll total[m+1];
		for (int i = 0; i < m+1; i++) {
			if (i == 0) total[0] = 1;
			if (i == 1) total[1] = 1;
			if (i == 2) total[2] = 2;
			if (i == 3) total[3] = 4;
			if (i > 3) total[i] = (total[i-1] + total[i-2] + total[i-3] + total[i-4]) % MOD;
		}
		
		ll ways[m+1], cumWays;
		ways[0] = 0;
		ways[1] = 1;
		for (int j = 2; j < m+1; j++) {
			
			cumWays = 0;
			for (int i = 1; i < j; i++)
				cumWays = (cumWays + (ways[i] * fast_exp(total[j-i], n)) % MOD) % MOD; 
			
			ways[j] = (fast_exp(total[j], n) - cumWays) % MOD;
            if (ways[j] < 0) ways[j] = MOD + ways[j];
		}
		
		cout << ways[m] << endl;
	}
}
