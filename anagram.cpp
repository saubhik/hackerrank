#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		string s;
		cin >> s;
		int N = (int)s.size();
		if (N % 2 == 1) cout << "-1\n";
		else {
			string first = s.substr(0, N/2), second = s.substr(N/2);
			int count = 0;
			map<char, int> myMap;
			for (char ch : "abcdefghijklmnopqrstuvwxyz") myMap[ch] = 0;
			for (char ch : second) myMap[ch]++;
			for (char ch : first)
				if (--myMap[ch] < 0)
					count++;
			cout << count << endl;
		}
	}
}
