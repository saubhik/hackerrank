#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string a,b;
	cin >> a >> b;
	
	vector<char> vec1, vec2;
	for (size_t i = 0; i < a.size(); ++i)
		vec1.push_back(a[i]);
	
	for (size_t i = 0; i < b.size(); ++i) {
		vector<char>::iterator it = find(vec1.begin(), vec1.end(), b[i]);
		if (it != vec1.end())
			vec1.erase(it);
		else
			vec2.push_back(b[i]);
	}
	
	cout << vec1.size() + vec2.size();		
}
