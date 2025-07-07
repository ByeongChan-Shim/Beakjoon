#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int d(int n) {
    int sum = n;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    vector<int> v;
    for (int i = 1; i <= 10000; i++) {
        int dn = d(i);
        if (dn <= 10000) v.push_back(dn);
    }
    sort(v.begin(), v.end());
    for (int i = 1; i <= 10000; i++) {
        if (!binary_search(v.begin(), v.end(), i)) {
            cout << i << "\n";
        }
    }
}