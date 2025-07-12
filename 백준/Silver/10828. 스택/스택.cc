#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    stack<long> st;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "push") {
            long x;
            cin >> x;
            st.push(x);
        } else if (s == "pop") {
            if (st.empty()) cout << "-1" << "\n";
            else cout << st.top() << "\n", st.pop();
        } else if (s == "size") {
            cout << st.size() << "\n";
        } else if (s == "empty") {
            if (st.empty()) cout << "1" << "\n";
            else cout << "0" << "\n";
        } else if (s == "top") {
            if (st.empty()) cout << "-1" << "\n";
            else cout << st.top() << "\n";
        }
    }
}