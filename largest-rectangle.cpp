#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int h[n];
    for (int i = 0; i < n; i++) cin >> h[i];
    
    stack<int> st;
    
    int i = 0, area, max_area = 0, tp;
    while (i < n) {
        if (st.empty() or h[st.top()] <= h[i])
            st.push(i++);
        
        else {
            tp = st.top();
            st.pop();
            area = h[tp] * (st.empty() ? i : (i - 1 - st.top()));
            if (area > max_area) max_area = area;
        }
    }
    
    while (!st.empty()) {
        tp = st.top();
        st.pop();
        area = h[tp] * (st.empty() ? i : (i - 1 - st.top()));
        if (area > max_area) max_area = area;
    }
    
    cout << max_area;
}
