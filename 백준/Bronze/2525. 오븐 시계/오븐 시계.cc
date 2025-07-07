#include <iostream>
using namespace std;
int main() {
    int a, b, c, q, w;
    cin >> a >> b;
    cin >> c;
    b += c;
    q = b / 60;
    w = b % 60;
    a += q;
    if(a > 23){
        a -= 24;
    }
    cout << a << " " << w;
}