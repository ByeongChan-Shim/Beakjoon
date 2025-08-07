#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, m, count = 0;
    cin >> n >> m;
    deque<int> dq;
    vector<int> v;
    for (int i = 1; i <= n; i++) dq.push_back(i);
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i : v) {
        int a = 0, b = 0;
        deque<int> dqa = dq;
        deque<int> dqb = dq;
        while (dqa.front() != i) {
            dqa.push_back(dqa.front());
            dqa.pop_front();
            a++;
        }
        while (dqb.front() != i) {
            dqb.push_front(dqb.back());
            dqb.pop_back();
            b++;
        }
        if (a < b) {
            while (dq.front() != i) {
                dq.push_back(dq.front());
                dq.pop_front();
                count++;
            }
            dq.pop_front();
        }
        else {
            while (dq.front() != i) {
                dq.push_front(dq.back());
                dq.pop_back();
                count++;
            }
            dq.pop_front();
        }
    }
    cout << count;
}