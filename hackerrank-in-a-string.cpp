#include <iostream>
#include <string>
using namespace std;

int main() {
    int q;
    size_t j;
    string s, tgt = "hackerrank";
    cin >> q;
    while (q--) {
        cin >> s;
        j = 0;
        for (size_t i = 0; i < s.size(); ++i) {
            if (s[i] == tgt[j]) {
                j++;
            }
        }
        if (j == tgt.size()) cout << "YES\n";
        else cout << "NO\n";
    }
}
