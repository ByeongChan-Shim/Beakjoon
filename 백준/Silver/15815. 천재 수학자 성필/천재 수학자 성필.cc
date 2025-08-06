#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    stack<int> st;
    for (auto c : s) {
        if ('0' <= c && c <= '9') st.push(c - '0');
        else {
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            if (c == '+') st.push(a + b);
            else if (c == '-') st.push(a - b);
            else if (c == '*') st.push(a * b);
            else if (c == '/') st.push(a / b);
        }
    }
    cout << st.top();
}