#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main() {
	string s;
	cin >> s;
	
	map<char, int> myMap;
	for (int i = 0; i < (int)s.length(); i++) {
		myMap[s[i]]++;
	}
	
	bool no = false;
	int odd = 0;
	map<char, int>::iterator it;
	for(it = myMap.begin(); it != myMap.end(); ++it)
		if (it->second % 2 == 1) {
			odd++;
			if (odd > 1) {
				no = true;
				break;
			}
		}
	
	if (!no) cout << "YES\n";
	else cout << "NO\n";	
}
