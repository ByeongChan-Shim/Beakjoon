#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b = 0;
    cin >> a;
    string s;
    for (long i = 0; i < a; i++) {
        cin >> s;
        stack<char> st;
        for (char c : s) {
            if (!st.empty() && st.top() == c) st.pop();
            else st.push(c);
        }
        if (st.empty()) b++;
    }
    cout << b;
}