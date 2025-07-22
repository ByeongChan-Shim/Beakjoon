#include <iostream>
#include <deque>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n;
    cin >> n;
    deque<long> dq;
    while (n--) {
        long x;
        cin >> x;
        if (x == 1) {
            long y;
            cin >> y;
            dq.push_front(y);
        } else if (x == 2) {
            long y;
            cin >> y;
            dq.push_back(y);
        } else if (x == 3) {
            if (!dq.empty()) {
                cout << dq.front() << "\n";
                dq.pop_front();
            } else cout << -1 << "\n";
        } else if (x == 4) {
            if (!dq.empty()) {
                cout << dq.back() << "\n";
                dq.pop_back();
            } else cout << -1 << "\n";
        } else if (x == 5) {
            cout << dq.size() << "\n";
        } else if (x == 6) {
            if (dq.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        } else if (x == 7) {
            if (!dq.empty()) cout << dq.front() << "\n";
            else cout << -1 << "\n";
        } else if (x == 8) {
            if (!dq.empty()) cout << dq.back() << "\n";
            else cout << -1 << "\n";
        }
    }
}