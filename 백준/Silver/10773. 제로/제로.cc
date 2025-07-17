#include <iostream>
#include <stack>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long long k, sum = 0;
    cin >> k;
    stack<long long> st;
    for (long long i = 0; i < k; i++) {
        long long x;
        cin >> x;
        if (x == 0 && !st.empty()) st.pop();
        else st.push(x);
    }
    while (!st.empty()) {
        sum += st.top();
        st.pop();
    }
    cout << sum;
}