#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    while (n--) {
        long m, sum = 0;
        cin >> m;
        long ar[m], arr[m];
        for (long i = 0; i < m; i++) cin >> ar[i];
        for (long i = 0; i < m; i++) cin >> arr[i];
        sort(ar, ar + m);
        for (long i = 0; i < m - 1; i++) if (binary_search(ar, ar + m, ar[i] + 500) == true && binary_search(arr, arr + m, ar[i] + 1000) == true && binary_search(arr, arr + m, ar[i] + 1500) == true) sum++;
        cout << sum << "\n";
    }
}