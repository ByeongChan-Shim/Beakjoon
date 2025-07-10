#include <iostream>
#include <vector>
using namespace std;
int main() {
    int a, b, sum = 0;
    cin >> a >> b;
    vector<int> v;
    v.push_back(0);
    for (int i = 1; i <= 45; i++) {
        for (int j = 1; j <= i; j++) {
            v.push_back(i);
        }
    }
    for (int i = a; i <= b; i++) sum += v[i];
    cout << sum;
}