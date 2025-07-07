#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long a;
    cin >> a;
    if (a <= 100000 && a % 2024 == 0) cout << "Yes";
    else cout << "No";
}