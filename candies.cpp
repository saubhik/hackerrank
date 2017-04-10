#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int r[n], candies[n] = {0};
	long long int sum = 0;
	for (int i = 0; i < n; i++) cin >> r[i];
	
	for (int i = 0; i < n; i++) {
		if (i == 0 and r[0] <= r[1]) candies[0] = 1;
		else if (i == n-1 and r[i] <= r[i-1]) candies[i] = 1;
		else if (r[i] <= r[i+1] and r[i] <= r[i-1]) candies[i] = 1;
	}
	
	for (int i = 1; i < n; i++)
		if (r[i] > r[i-1]) candies[i] = candies[i-1] + 1;
	
	for (int i = n-2; i >= 0; i--)
		if (r[i] > r[i+1]) candies[i] = max(candies[i], candies[i+1] + 1);
	
	for (int i = 0; i < n; i++) sum += candies[i];
	
	cout << sum << endl;
}
