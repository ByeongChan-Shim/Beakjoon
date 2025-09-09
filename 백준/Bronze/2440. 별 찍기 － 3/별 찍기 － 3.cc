#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    n++;
    while (n--) {
        for (int i = 0; i < n; i++) cout << "*";
        cout << "\n";
    }
}