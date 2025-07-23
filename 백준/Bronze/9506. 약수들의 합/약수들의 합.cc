#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    while (true) {
        long n, sum = 0;
        cin >> n;
        if (n == -1) break;
        vector<long> v;
        for (long i = 1; i < n; i++) if (n % i == 0) v.push_back(i);
        for (long i : v) sum += i;
        if (sum == n) {
            cout << n << " = ";
            for (long i = 0; i < (v.size() - 1); i++) cout << v[i] << " + ";
            cout << v[v.size() - 1] << "\n";
        } else cout << n << " is NOT perfect." << "\n";
    }
}