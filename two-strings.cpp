#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		string s, r;
		cin >> r >> s;
		map<char, bool> myMap;
		bool yes = false;
		for (char ch : "abcdefghijklmnopqrstuvwxyz") myMap[ch] = false;
		for (char ch : r) myMap[ch] = true;
		for (char ch : s) {
			if (myMap[ch]) {
				yes = true;
				break;
			}
		}
		if (yes) cout << "YES\n";
		else cout << "NO\n";
	}		
}
