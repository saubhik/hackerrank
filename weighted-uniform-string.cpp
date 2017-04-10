#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	string s;
	cin >> s;
	
    int num;
    set<int> val;
	char last = '0';
	for (int i = 0; i < (int)s.length(); i++) {
		if (s[i] != last)
			num = s[i] - 'a' + 1;			
		else
			num += s[i] - 'a' + 1;
		last = s[i];
        val.insert(num);
	}
	
	long n, q;
	cin >> n;
	while (n--) {
		cin >> q;
		if (val.find(q) != val.end())
            cout << "Yes\n";
        else
            cout << "No\n";
	}	
}
