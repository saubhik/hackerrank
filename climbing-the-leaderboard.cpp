#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int a[n + 1], rank[n + 1] = {1};
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (i > 0) {
			if (a[i] == a[i-1]) rank[i] = rank[i-1];
			else rank[i] = rank[i-1] + 1;
		}
	}
	
	a[n] = 0;
	if (a[n] == a[n-1]) rank[n] = rank[n-1];
	else rank[n] = rank[n-1] + 1;
	
	int m;
	cin >> m;
	
	int b[m], rank2[m];
	for (int i = 0; i < m; i++) cin >> b[i];
	
	int j = m - 1, i = 0;
	while (j >= 0 and i < n + 1) {
		if (b[j] >= a[i]) {
			rank2[j] = rank[i];
			j--;
		}
		else i++;
	}
	
	for (int i = 0; i < m; i++) cout << rank2[i] << endl;	
}
