#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b;
    cin >> a;
    vector<int> v;
    for (int i = 1; i <= a; i++) {
        cin >> b;
        v.push_back(i - 1);
        for (int j = 0; j < b; j++) {
            v[i - 1 - j] = v[i - 2 - j];
        }
        v[i - 1 - b] = i;
    }
    for (int i = 0; i < a; i++) {
        cout << v[i] << " ";
    }
}