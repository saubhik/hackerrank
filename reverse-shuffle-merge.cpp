#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string inp;
    cin >> inp;
    
    bool visited[inp.length()] = {false};
    vector<char> ans_stack;

    for (int i = inp.length() - 1; i >= 0; i--) {
        if (!visited[inp[i]]) {
            visited[inp[i]] = true;
            ans_stack.push_back(inp[i]);
        }
        else {
            visited[inp[i]] = false;
            if (ans_stack.back() <= inp[i]) {
                ans_stack.erase(find(ans_stack.begin(), ans_stack.end(), inp[i]));
                ans_stack.push_back(inp[i]);
            }
        }
    }

    vector<char>::iterator it;
    for (it = ans_stack.begin(); it != ans_stack.end(); it++) cout << *it;
    cout << endl;
}
