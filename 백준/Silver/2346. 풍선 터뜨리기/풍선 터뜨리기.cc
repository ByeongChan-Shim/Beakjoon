#include <iostream>
#include <deque>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    deque<pair<int, int>> dq;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        dq.push_back(make_pair(i, x));
    }
    for (int i = 0; i < n; i++) {
        int x = dq[0].second;
        cout << dq[0].first << " ";
        dq.pop_front();
        if (x > 0) {
            x--;
            while (x--) {
                dq.push_back(make_pair(dq[0].first, dq[0].second));
                dq.pop_front();
            }
        } else {
            int y = abs(x);
            while (y--) {
                dq.push_front(make_pair(dq[dq.size() - 1].first, dq[dq.size() - 1].second));
                dq.pop_back();
            }
        }
    }
}