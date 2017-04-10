#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s1, s2, res = "";
		cin >> s1 >> s2;
		int i = 0, j = 0;
		while (i < (int)s1.length() and j < (int)s2.length()) {
			if (s1[i] < s2[j]) {
				res += s1[i];
				i++;
			}
			else if (s1[i] > s2[j]) {
				res += s2[j];
				j++;
			}
			else if (s1[i] == s2[j]) {
				int x = i, y = j;
				char point = s1[i];
				for (; x < (int)s1.length() and y < (int)s2.length(); x++, y++) {
					if (s1[x] != s2[y]) break;
					else if (s1[x] > point) {
						res += s1.substr(i, x - i) + s2.substr(j, y - j);
						i = x;
						j = y;
						point = s1[i];
					}
				}
				if (x == (int)s1.length()) {
					res += s2[j];
					j++;
				}				
				else if (y == (int)s2.length()) {
					res += s1[i];
					i++;
				}
				else if (s1[x] < s2[y]) {
					res += s1[i];
					i++;
				}
				else if (s1[x] > s2[y]) {
					res += s2[j];
					j++;
				}
			}
		}
		res += s1.substr(i) + s2.substr(j);
		cout << res << "\n";
	}
}
