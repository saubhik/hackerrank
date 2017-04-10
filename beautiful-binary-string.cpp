#include <iostream>
using namespace std;

int main() {
	int n, count  = 0;
	cin >> n;
	char ch[n];
	for (int i = 0; i < n; i++) cin >> ch[i];
	for (int i = 0; i < n-2;) {
		if (ch[i] == '0' and ch[i+1] == '1' and ch[i+2] == '0') {
			count++;
			i = i+3;
		}
		else i++;
	}
	cout << count << "\n";
	return 0;
}
