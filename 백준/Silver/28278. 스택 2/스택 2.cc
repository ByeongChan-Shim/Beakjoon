#include <iostream>
#include <stack>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n;
    cin >> n;
    cin.ignore();
    stack<long> st;
    for (long i = 0; i < n; i++) {
        long s;
        cin >> s;
        if (s == 1) {
            long x;
            cin >> x;
            st.push(x);
        } else if (s == 2) {
            if (!st.empty()) {
                cout << st.top() << "\n";
                st.pop();
            }
            else cout << -1 << "\n";
        } else if (s == 3) {
            cout << st.size() << "\n";
        } else if (s == 4) {
            if (st.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        } else if (s == 5) {
            if (!st.empty()) cout << st.top() << "\n";
            else cout << -1 << "\n";
        }
    }
}