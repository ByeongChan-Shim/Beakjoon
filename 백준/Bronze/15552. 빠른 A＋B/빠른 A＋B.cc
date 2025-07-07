#include <iostream>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    long long x;
    int a, b;
    cin >> x;
    for (int i = 0; i < x; ++i) {
        cin >> a >> b;
        cout << a + b << "\n";
    }
}