#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n;
    cin >> n;
    vector<long long> v(n), zero, result;
    deque<long long> dq;
    for (long i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 0) zero.push_back(i);
    }
    for (long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (!zero.empty() && i == zero[dq.size()]) dq.push_back(x);
    }
    long m;
    cin >> m;
    for (long i = 0; i < m; i++) {
        long long x;
        cin >> x;
        if (!dq.empty()) {
            dq.push_front(x);
            x = dq.back();
            dq.pop_back();
        }
        result.push_back(x);
    }
    for (auto c : result) cout << c << " ";
}
