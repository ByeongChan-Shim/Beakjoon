#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if((a % 4 == 0 and a % 100 != 0) or (a % 400 == 0 and a % 4 == 0)){
        cout << 1;
    }else {
        cout << 0;
    }
}