#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin >> tt;
    while(tt--) {
        int n, m, count = 1;
        cin >> n >> m;
        vector<int> v(n, 0);
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            q.push(make_pair(i, x));
            pq.push(x);
        }
        while(!q.empty()) {
            if (pq.top() == q.front().second) {
                v[q.front().first] = count;
                count++;
                q.pop();
                pq.pop();
            }
            else {
                q.push(q.front());
                q.pop();
            }
        }
        cout << v[m] << "\n";
    }
}