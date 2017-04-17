#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n--) {
        string s;
        cin >> s;
        stack<char> st;
        bool no = false;
        for (char ch : s) {
            if (ch == '(' or ch == '[' or ch == '{') {
                if (ch == '(') st.push(')');
                if (ch == '[') st.push(']');
                if (ch == '{') st.push('}');
            }
            else {
                if (st.empty()) {
                    no = true;
                    break;
                }
                if (ch != st.top())
                    break;
                else
                    st.pop();
            }
        }
        if (st.empty() and (!no))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
