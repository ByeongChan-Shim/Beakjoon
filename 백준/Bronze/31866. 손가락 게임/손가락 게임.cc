#include <iostream>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int x, y;
    cin >> x >> y;
    if (x  == 0) {
        if (y == 0) cout << "=";
        else if (y == 1) cout << ">";
        else if (y == 2) cout << ">";
        else if (y == 3) cout << ">";
        else if (y == 4) cout << ">";
        else if (y == 5) cout << "<";
    }
    else if (x == 1) {
        if (y == 0) cout << "<";
        else if (y == 1) cout << "=";
        else if (y == 2) cout << "<";
        else if (y == 3) cout << "=";
        else if (y == 4) cout << "=";
        else if (y == 5) cout << "<";
    }
    else if (x == 2) {
        if (y == 0) cout << "<";
        else if (y == 1) cout << ">";
        else if (y == 2) cout << "=";
        else if (y == 3) cout << ">";
        else if (y == 4) cout << ">";
        else if (y == 5) cout << ">";
    }
    else if (x == 3) {
        if (y == 0) cout << "<";
        else if (y == 1) cout << "=";
        else if (y == 2) cout << "<";
        else if (y == 3) cout << "=";
        else if (y == 4) cout << "=";
        else if (y == 5) cout << "<";
    }
    else if (x == 4) {
        if (y == 0) cout << "<";
        else if (y == 1) cout << "=";
        else if (y == 2) cout << "<";
        else if (y == 3) cout << "=";
        else if (y == 4) cout << "=";
        else if (y == 5) cout << "<";
    }
    else if (x == 5) {
        if (y == 0) cout << ">";
        else if (y == 1) cout << ">";
        else if (y == 2) cout << "<";
        else if (y == 3) cout << ">";
        else if (y == 4) cout << ">";
        else if (y == 5) cout << "=";
    }
}