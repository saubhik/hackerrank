#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

int main() {
	int t;
	cin >> t;
	string s;
	map<char, int> myMap;
	
	for (int j = 0; j < t; j++) {
		cin >> s;
		set<char> mySet;
		
		for (int i = 0; i < (int)s.length(); ++i)
			mySet.insert(s[i]);
		
        set<char>::iterator it = mySet.begin();
		for (; it != mySet.end(); ++it)
			myMap[*it]++;
	}
	
	int count = 0;
	map<char, int>::iterator it = myMap.begin();
	for (; it != myMap.end(); ++it)
		if (it->second == t) count++;
	cout << count;
}
