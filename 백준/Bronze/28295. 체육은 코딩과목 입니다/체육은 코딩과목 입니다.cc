#include <iostream>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int a, b = 0;
    for (int i = 0; i < 10; i++) {
        cin >> a;
        if (a == 1) b += 90;
        else if (a == 2) b += 180;
        else if (a == 3) b += 270;
    }
    b = b % 360;
    if (b == 0) cout << "N";
    else if (b == 90) cout << "E";
    else if (b == 180) cout << "S";
    else if (b == 270) cout << "W";
}