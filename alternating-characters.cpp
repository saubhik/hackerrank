#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		int count = 0;
		for (int i = 1; i < s.length(); i++)
			if (s[i] == s[i-1]) count ++;
		cout << count << "\n";
	}
}
