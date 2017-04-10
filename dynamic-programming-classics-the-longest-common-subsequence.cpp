#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	string a[n], b[m];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) cin >> b[i];
	
	string lcs[n+1][m+1];
	for (int i = 0; i < n+1; i++)
		for (int j = 0; j < m+1; j++)
			if (i == 0 or j == 0)
				lcs[i][j] = "";
	
	for (int i = 1; i < n+1; i++) {
		for (int j = 1; j < m+1; j++) {
			if (a[i-1] == b[j-1])
				lcs[i][j] = ((lcs[i-1][j-1] != "") ? (lcs[i-1][j-1] + " " + a[i-1]) : (lcs[i-1][j-1] + a[i-1]));
			else {
				if (lcs[i][j-1].length() > lcs[i-1][j].length())
					lcs[i][j] = lcs[i][j-1];
				else
					lcs[i][j] = lcs[i-1][j];
			}
		}
	}
	
	cout << lcs[n][m] << endl;
}
