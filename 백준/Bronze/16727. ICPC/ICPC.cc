#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    if (a + d > b + c) cout << "Persepolis";
    else if (a + d < b + c) cout << "Esteghlal";
    else {
        if (b > d) cout << "Esteghlal";
        else if (b < d) cout << "Persepolis";
        else cout << "Penalty";
    }
}