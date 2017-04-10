#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		
		char grid[n][n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				cin >> grid[i][j];
			sort(grid[i], grid[i] + n);
		}
		
		bool no = false;
		for (int j = 0; j < n; j++)
			for (int i = 1; i < n; i++)
				if (grid[i][j] < grid[i-1][j]) {
					no = true;
					break;
				}
		
		if (no) cout << "NO\n";
		else cout << "YES\n";
	}
}
