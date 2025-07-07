#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b, c, o = 0, o1 = 1, o2 = 1;
    cin >> a >> b >> c;
    for (int i = 0; i < a; i++) {
        o1 += b;
        o2 += c;
        if (o1 < o2) {
            o = o1;
            o1 = o2;
            o2 = o;
        } else if (o1 == o2) o2--;
    }
    cout << o1 << " " << o2 << endl;
}