#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<string> v;
    while (t--) {
        string s;
        cin >> s;
        stack<char> st;
        st.push(s[0]);
        for (int i = 1; i < s.length(); i++) {
            if (!st.empty() &&st.top() == '(' && s[i] == ')') st.pop();
            else st.push(s[i]);
        }
        if (st.size() == 0) v.push_back("YES");
        else v.push_back("NO");
    }
    for (int i = 0; i < v.size(); i++) cout << v[i] << "\n";
}