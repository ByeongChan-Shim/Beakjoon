#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int count = 1;
    while (true) {
        int L, P, V, sum = 0;
        cin >> L >> P >> V;
        if (L == 0 && P == 0 && V == 0) break;
        int x, y;
        x = V / P;
        y = V % P;
        sum += x * L;
        if (y <= L) sum += y;
        else sum += L;
        cout << "Case " << count << ": " << sum << "\n";
        count++;
    }
}