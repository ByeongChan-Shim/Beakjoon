#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if((b - 45) < 0){
        a -= 1;
        b += 15;
        if(a < 0){
            a = 23;
        }
        cout << a << " " << b;
    } else {
        cout << a << " " << b - 45;
    }
    
}