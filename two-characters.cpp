#include <iostream>
#include <vector>
using namespace std;

int lengthOfT_func(char ch1, char ch2, vector<char> ch) {
	vector<char>::iterator it;
	for (it = ch.begin(); it != ch.end();) {
		if (*it == ch1 or *it == ch2) ++it;
		else it = ch.erase(it);
	}
	
	bool alternating = true;
	char first = ch[0], second = ch[1];
	for (int i = 0; i < ch.size(); i++) {
		if (i%2 == 0 and ch[i] != first) {
			alternating = false;
			break;
		}
		if (i%2 == 1 and ch[i] != second) {
			alternating = false;
			break;
		}
	}
	
	if (!alternating) return 0;
	else return ch.size();
}

int main() {
	int n, maxLen = 0;
	cin >> n;
	
	vector<char> ch, distinct;
	bool found;
	
	for (int i = 0; i < n; i++) {
		char t;
		cin >> t;		
		ch.push_back(t);
		
		found = false;
		for (int i = 0; i < distinct.size(); i++)
			if (distinct[i] == t) found = true;
		if (!found) distinct.push_back(t);
	}
	
	for (int i = 0; i < distinct.size(); i++)
		for (int j = i+1; j < distinct.size(); j++) {
			int lengthOfT = lengthOfT_func(distinct[i], distinct[j], ch);
			if (maxLen < lengthOfT)
				maxLen = lengthOfT;
		}
	
	cout << maxLen << endl;
}
