#include <iostream>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << ((a * a) + (b * b) + (c * c) + (d * d) + (e * e)) % 10;
}