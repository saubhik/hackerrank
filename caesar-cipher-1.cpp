#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;
	cin >> n;
	
	vector<char> original(n);
	
	for (int i = 0; i < n; i++) {
		cin >> original[i];
	}
	
	cin >> k;
	
	for (int i = 0; i < n; i++) {
		char replace = original[i];
		if ('a' <= original[i] and original[i] <= 'z')
			replace = ((original[i] -'a' + k) % 26) + 'a';
		if ('A' <= original[i] and original[i] <= 'Z')
			replace = ((original[i] - 'A' + k) % 26) + 'A';	
		original[i] = replace;
	}
	
	for (int i = 0; i < n; i++)
		cout << original[i];	
	cout << "\n";
}		
