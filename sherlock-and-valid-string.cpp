#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main() {
	string s;
	cin >> s;
	
	map<char, int> myMap;
	for (size_t i = 0; i < s.size(); ++i) {
		myMap[s[i]] ++;
	}
	
	vector<int> values;
	int max = 0, min = (int)s.size();
	for (map<char, int>::iterator it = myMap.begin(); it != myMap.end(); ++it) {
		values.push_back(it->second);
		if (it->second > max) max = it->second;
		if (it->second < min) min = it->second;
	}
	
	int minCount = (int)s.size(), count = 0;
	for (int i = min; i <= max; ++i) {
		count = 0;
		for (size_t j = 0; j < values.size(); ++j) {
			if (values[j] < i)
				count += values[j];
			if (values[j] > i)
				count += values[j] - i;
		}
		if (count < minCount) minCount = count;
	}
	
	cout << ((minCount <= 1) ? "YES" : "NO");
}
