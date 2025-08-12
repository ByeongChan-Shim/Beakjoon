#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, l;
    cin >> n >> l;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    queue<int> q;
    for (int i = 0; i < n; i++) q.push(v[i]);
    for (int i = 0; i < n; i++) {
        if (l >= q.front()) {
            q.pop();
            l++;
        } else break;
    }
    cout << l;
}