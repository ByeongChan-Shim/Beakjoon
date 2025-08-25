#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n, T, P, count = 0;
    cin >> n;
    vector<long> v(6);
    for (int i = 0; i < 6; i++) cin >> v[i];
    cin >> T >> P;
    for (int i = 0; i < 6; i++) count += (v[i] + T - 1) / T;
    cout << count << "\n" << n / P << " " << n % P;
}