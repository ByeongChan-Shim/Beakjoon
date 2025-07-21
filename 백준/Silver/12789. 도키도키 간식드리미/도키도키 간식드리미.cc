#include <iostream>
#include <stack>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, t, count = 1;
    cin >> n;
    stack<int> s;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (count == t) count++;
        else s.push(t);
        while (!s.empty() && s.top() == count) {
            s.pop();
            count++;
        }
    }
    if (count - 1 == n) cout << "Nice";
    else cout << "Sad";
}