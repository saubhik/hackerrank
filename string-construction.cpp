#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        set<char> mySet;
        for (char ch : s) mySet.insert(ch);
        cout << mySet.size() << endl;
    }
}
