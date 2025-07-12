#include <iostream>
#include <string>
#include <sstream>
#include <stack>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    while (true) {
        getline(cin, s);
        if (s == ".") break;
        stack<char> st;
        bool bal = true;
        for (char c : s) {
            if (c == '(' || c == '[') st.push(c);
            else if (c == ')') {
                if (st.empty() || st.top() != '(') {
                    bal = false;
                    break;
                }
                st.pop();
            }
            else if (c == ']') {
                if (st.empty() || st.top() != '[') {
                    bal = false;
                    break;
                }
                st.pop();
            }
        }
        if (!st.empty()) bal = false;
        cout << (bal ? "yes" : "no") << "\n";
    }
}