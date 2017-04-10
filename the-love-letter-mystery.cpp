#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	string s;
	
	cin >> t;
	
	while (t--) {
		cin >> s;
		int count = 0;
		for (size_t i = 0; i < s.size()/2; i++)
			count += abs(s.at(s.size() - i - 1) - s.at(i));
		cout << count << endl;
	}
}
