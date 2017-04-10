#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s, int i) {
    if (i >= 0) s.erase(i, 1);
    bool res = true;
    for (int j = 0; j < (int)(s.length()/2); ++j) {
        if (s[j] != s[(int)s.length() - j - 1]) {
            res = false;
            break;
        }
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool found = false;
        if (isPalindrome(s, -1)) cout << "-1";
        else {
            for (int i = 0; i < (int)s.length(); i++) {
                if (isPalindrome(s, i)) {
                    found = true;
                    cout << i;
                    break;
                }
            }
            if (!found) cout << "-1";
        }
        cout << endl;
    }
}
