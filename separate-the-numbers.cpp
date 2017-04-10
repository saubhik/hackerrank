#include <iostream>
#include <string>

using namespace std;

int main() {
	int q;
	string s;
	cin >> q;
	
	while (q--) {
		cin >> s;
		string first = "", next;
		size_t i;
		bool beautiful = false;
		
		if (s[0] == '0') beautiful = false;
		else {
			for (i = 0; i <= s.size()/2;) {
				
				first += s[i];
				size_t j = i + 1;
				next = to_string(stol(first) + 1);
				
				while (j < s.size()) {
					if (next == s.substr(j, next.size())) {
						j += next.size();
						next = to_string(stol(next) + 1);
						beautiful = true;
					}
					else {
						beautiful = false;
						i++;
						break;
					}
				}
				
				if (j >= s.size())
					break;
			}
		}
		
		if (beautiful) cout << "YES " << first << endl;
		else cout << "NO\n";
	}
}
