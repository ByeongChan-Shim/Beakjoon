#include <iostream>
#include <queue>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, k;
    cin >> n >> k;
    queue<int> qu;
    for (int i = 1; i <= n; i++) qu.push(i);
    cout << "<";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k - 1; j++) {
            int x = qu.front();
            qu.pop();
            qu.push(x);
        }
        if (qu.size() == 1) cout << qu.front() << ">";
        else cout << qu.front() << ", ";
        qu.pop();
    }
}