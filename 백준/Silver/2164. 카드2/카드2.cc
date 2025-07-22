#include <iostream>
#include <queue>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n;
    cin >> n;
    queue<long> q;
    for (long i = 1; i <= n; i++) {
        q.push(i);
    }
    while (q.size() > 1) {
        q.pop();
        q.push(q.front());
        q.pop();
    }
    cout << q.front();
}