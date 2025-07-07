#include <iostream>
#include <string>
#include <sstream>
#include <stack>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a;
    cin >> a;
    cin.ignore();
    for (int i = 0; i < a; i++) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        stack<string> st;
        while (ss >> word) {
            st.push(word);
        }
        cout << "Case #" << i + 1 << ": ";
        while (!st.empty()) {
            cout << st.top() << " ";
            st.pop();
        }
        cout << "\n";
    }
}