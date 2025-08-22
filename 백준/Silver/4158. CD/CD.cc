#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    while (true) {
        long n, m;
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        long arr[1000000], count = 0, start = 0;
        for (int i = 0; i < n; i++) cin >> arr[i];
        for (int i = 0; i < m; i++) {
            long x;
            cin >> x;
            while (x <= arr[n - 1]) {
                if (x < arr[start]) break;
                else if (x > arr[start]) start++;
                else {
                    count++;
                    start++;
                }
            }
        }
        cout << count << "\n";
    }
}