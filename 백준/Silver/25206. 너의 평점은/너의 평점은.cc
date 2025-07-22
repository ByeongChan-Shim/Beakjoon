#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int tt = 20;
    double sum = 0, total = 0;
    while(tt--) {
        string s, ss;
        double d, dd;
        cin >> s >> d >> ss;
        if (ss == "A+") dd = 4.5;
        else if (ss == "A0") dd = 4.0;
        else if (ss == "B+") dd = 3.5;
        else if (ss == "B0") dd = 3.0;
        else if (ss == "C+") dd = 2.5;
        else if (ss == "C0") dd = 2.0;
        else if (ss == "D+") dd = 1.5;
        else if (ss == "D0") dd = 1.0;
        else if (ss == "F") dd = 0.0;
        else continue;
        sum += d * dd;
        total += d;
    }
    cout << sum / total;
}