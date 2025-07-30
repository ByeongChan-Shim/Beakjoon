#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n;
    cin >> n;
    priority_queue<int> left;
    priority_queue<int, vector<int>, greater<int>> right;
    while(n--) {
        int x;
        cin >> x;
        if (left.empty() || x <= left.top()) left.push(x);
        else right.push(x);
        if (left.size() > right.size() + 1) {
            right.push(left.top());
            left.pop();
        }
        else if (right.size() > left.size()) {
            left.push(right.top());
            right.pop();
        }
        cout << left.top() << "\n";
    }
}