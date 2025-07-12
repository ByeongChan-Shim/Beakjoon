#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int ar[5], sum = 0;
    for (int i= 0; i < 5; i++) {
        int n;
        cin >> n;
        ar[i] = n;
        sum += n;
    }
    sort(ar, ar+5);
    cout << sum / 5 << "\n" << ar[2];
}