#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> lengths(n);
    for (int i = 0; i < n; i++) cin >> lengths[i];

    int rem = n, min;
    while (rem > 0) {
        cout << rem << endl;

        min = lengths[0];
        
        for (int i = 0; i < rem; i++) 
            if (lengths[i] < min) min = lengths[i];
        
        vector<int>::iterator it;
        for (it = lengths.begin(); it != lengths.end();) {
            if (*it == min)
                it = lengths.erase(it);
            else {
                *it -= min;
                ++it;
            }
        }
        
        rem = lengths.size();
    }
}
