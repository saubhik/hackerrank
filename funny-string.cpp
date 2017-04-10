#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

string reverseStr(string s) {
	int n = s.length();
	for (int i = 0; i < n/2; i++)
		swap(s[i], s[n-i-1]);
	return s;
}

void check(string s, string r) {
	bool flag = false;
	for (int i = 1; i <= s.length()/2; i++) {
		if (!(abs(s[i] - s[i-1]) == abs(r[i] - r[i-1]))) {
			flag = true;
			break;
		}
	}
	if (flag) cout << "Not Funny\n";
	else cout << "Funny\n";
}
			

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		string r = reverseStr(s);
		check(s, r);
	}
	return 0;
}