#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, k, sum = 0;
    cin >> n >> k;
    vector<int> v(13, 0); // 0 ~ 12
    for (int i = 0; i < n; i++) {
        int s, y;
        cin >> s >> y;
        if (s == 0) v[y * 2 -1]++;
        else v[y * 2]++;
    }
    for (int i = 1; i <= 12; i++) {
        if (v[i] != 0) {
            if (v[i] % k == 0) sum += v[i] / k;
            else sum += v[i] / k + 1;
        }
    }
    cout << sum;
}