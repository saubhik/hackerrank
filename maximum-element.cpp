#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a, x;
    vector<pair<long, long> > stack;
    vector<pair<long, long> >::iterator it;
    long max;
    while (n--) {
        cin >> a;
        if (a == 1) {
            cin >> x;
            if (stack.size() >= 1) max = stack.back().second;
            else max = 0;
            if (x > max) max = x;
            stack.push_back(make_pair(x, max));
        }
        if (a == 2) {
            stack.pop_back();
        }
        if (a == 3) {
            cout << stack.back().second << endl;
        }
    }
}
