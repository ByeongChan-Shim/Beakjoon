#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n;
    cin >> n;
    vector<long long> v(1001);
    v[1] = 1;
    v[2] = 2;
    for (int i = 3; i <= 1000; i++) v[i] = (v[i - 2] + v[i - 1]) % 10007;
    cout << v[n];
}