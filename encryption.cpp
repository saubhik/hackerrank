#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	string s;
	cin >> s;
	
	int n = (int)s.size();
	int rows = sqrt(n), columns = rows, upperLimit = rows + 1;
	
	while (rows * columns < n) {
		if (columns < upperLimit)
			columns++;
		else rows++;
	}
	
	for (int i = 0; i < columns; ++i) {
		for (int j = i; j < n; j += columns) {
			cout << s[j];
		}
		cout << " ";
	}
	
	cout << "\n";
}
