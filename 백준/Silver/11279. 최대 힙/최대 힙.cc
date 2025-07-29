#include <iostream>
#include <queue>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n;
    cin >> n;
    priority_queue<long long> pq;
    while(n--) {
        long long x;
        cin >> x;
        if (x == 0) {
            if (pq.empty()) cout << 0 << "\n";
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else pq.push(x);
    }
}