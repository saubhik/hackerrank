#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s, string t) {
	size_t len = s.size();
    bool marked[len] = {false}, done;
	for (size_t i = 0; i < len; i++) {
		done = false;
		for (size_t j = 0; j < len; j++) {
			if (!marked[j] and s[i] == t[j]) {
				marked[j] = true;
				done = true;
				break;
			}
		}
		if (!done) return false;
	}
	return true;		
}

int main() {
	int t;
	string s;
	
	cin >> t;
	
	while (t--) {
		cin >> s;
		
		int count = 0, width;
		string src, tgt;
		for (size_t i = 0; i < s.size(); i++) {
			for (size_t j = i; j < s.size(); j++) {
				width = j - i + 1;
				src = s.substr(i, width);
				for (size_t k = i + 1; k + width <= s.size(); k++) {
					tgt = s.substr(k, width);
					if (isAnagram(src, tgt))
						count++;
				}
			}
		}
		
		cout << count << endl;
	}
}
