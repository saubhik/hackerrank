#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	char depth[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> depth[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {	
			if (i > 0 and j > 0 and i < n-1 and j < n-1) {
				if (depth[i][j-1] < depth[i][j] and
					depth[i][j+1] < depth[i][j] and
					depth[i-1][j] < depth[i][j] and
					depth[i+1][j] < depth[i][j]) {
					cout << 'X';
					continue;
				}
			}
			cout << depth[i][j];
		}
		cout << "\n";
	}
}
