#include <iostream>
using namespace std;
int chleorhddirtn(int x, int y) {
    if (y == 0) return x;
    else return chleorhddirtn(y, x % y);
}
int chlthrhdqotn(int x, int y) {
    return x * y / chleorhddirtn(x,y);
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b;
    cin >> a >> b;
    cout << chleorhddirtn(a, b) << "\n" << chlthrhdqotn(a, b);
}