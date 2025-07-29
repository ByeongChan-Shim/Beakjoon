#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct compare {
    bool operator()(long long a, long long b) {
        if (abs(a) == abs(b)) return a > b;
        return abs(a) > abs(b);
    }
};
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n;
    cin >> n;
    priority_queue<long long, vector<long long>, compare> pq;
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