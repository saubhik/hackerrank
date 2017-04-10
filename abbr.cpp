#include <iostream>
#include <string>
using namespace std;

int main() {
	int q;
	size_t n, m;
	string s, t;
	
	cin >> q;
	
	while (q--) {
		cin >> s >> t;
		n = s.size();
		m = t.size();
		
		bool lookup[m + 1][n + 1];
		
		for (size_t j = 0; j < n + 1; ++j) lookup[0][j] = true;
		for (size_t i = 1; i < m + 1; ++i) lookup[i][0] = false;
		
		for (size_t i = 1; i < m + 1; ++i)
			for (size_t j = 1; j < n + 1; ++j) {
				lookup[i][j] = false;
				if (lookup[i][j - 1] and islower(s[j - 1]))
					lookup[i][j] = true;
				if (lookup[i - 1][j - 1] and t[i - 1] == toupper(s[j - 1]))
					lookup[i][j] = true;
			}
		
		cout << ((lookup[m][n]) ? "YES\n" : "NO\n");
	}
}
