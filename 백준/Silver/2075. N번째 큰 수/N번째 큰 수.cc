#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    priority_queue<long, vector<long>, greater<long>> pq;
    for (long i = 0; i < n * n; i++) {
        long x;
        cin >> x;
        if (pq.size() < n) pq.push(x);
        else {
            if (pq.top() < x) {
                pq.pop();
                pq.push(x);
            }
        }
    }
    cout << pq.top();
}