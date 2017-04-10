#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string makeWord(char ch, string s) {
	int len = s.length();
	char arr[len], temp, next;
	for (int i = 0; i < len; i++) {
		arr[i] = s[i];
	}
	sort(arr, arr + len);
	for (int i = len - 1; i > 0; i--) {
		if (arr[i - 1] == ch or arr[i] == next) {
			next = arr[i];
			temp = arr[i - 1];
			arr[i - 1] = arr[i];
			arr[i] = temp;
		}
	}
	string res = "";
	for (int i = 0; i < len; i++) res += arr[i];
	return res;
}

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		string s;
		cin >> s;
		int n = s.length();
		bool printed = false;
		for (int i = n - 2; i >= 0; i--) {
			string sub = s.substr(i);
			if (sub[0] >= sub[1]) continue;
			else {
				string word = makeWord(sub[0], sub);
				cout << s.substr(0, n - sub.length()) + word << endl;
				printed = true;
				break;
			}
		}
		if (!printed) cout << "no answer" << endl;
	}
}
