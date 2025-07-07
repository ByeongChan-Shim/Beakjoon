#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) cout << 1;
    for (int i = 0; i < a - 1; i++) cout << 0;
}