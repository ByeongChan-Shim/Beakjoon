#include <iostream>
#include <deque>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        deque<char> dq;
        for(int i = 0; i < n; i++) {
            char c;
            cin >> c;
            if (dq.empty()) dq.push_back(c);
            else {
                if (dq.front() >= c) dq.push_front(c);
                else dq.push_back(c);
            }
        }
        for(int i = 0; i < n; i++) {
            cout << dq.front();
            dq.pop_front();
        }
        cout << "\n";
    }
}