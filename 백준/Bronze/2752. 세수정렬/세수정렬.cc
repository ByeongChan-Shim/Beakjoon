#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long long a, b, c;
    cin >> a >> b >> c;
    long long aa[3] = {a, b, c};
    sort(aa, aa+3);
    cout << aa[0] << " " << aa[1] << " " << aa[2] << endl;
}