#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n;
    cin >> n;
    queue<long> q;
    while (n--) {
        string s;
        cin >> s;
        if (s == "push") {
            long x;
            cin >> x;
            q.push(x);
        } else if (s == "pop") {
            if (!q.empty()) {
                cout << q.front() << "\n";
                q.pop();
            } else cout << -1 << "\n";
        } else if (s == "size") {
            cout << q.size() << "\n";
        } else if (s == "empty") {
            if (q.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        } else if (s == "front") {
            if (!q.empty()) cout << q.front() << "\n";
            else cout << -1 << "\n";
        } else if (s == "back") {
            if (!q.empty()) cout << q.back() << "\n";
            else cout << -1 << "\n";
        }
    }
}