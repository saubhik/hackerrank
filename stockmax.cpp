#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		int price[n];
		for (int i = 0; i < n; i++) cin >> price[i];
		
		int highest = 0;
		long long int profit = 0;
		
		for (int i = n-1; i >= 0; i--) {
			if (price[i] > highest) highest = price[i];
			else profit += highest - price[i];
		}
		
		cout << profit << "\n";
	}
}
