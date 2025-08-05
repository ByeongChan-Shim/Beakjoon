#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ')' && !st.empty() && st.top() == '(') st.pop();
        else st.push(s[i]);
    }
    cout << st.size();
}