#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int x;
    cin >> x;
    if (x >= 620) cout << "Red";
    else if (x >= 590) cout << "Orange";
    else if (x >= 570) cout << "Yellow";
    else if (x >= 495) cout << "Green";
    else if (x >= 450) cout << "Blue";
    else if (x >= 425) cout << "Indigo";
    else if (x >= 380) cout << "Violet";
}