#include <iostream>
#include <vector>
using namespace std;
int count_fib = 0, count_fibo = 0;
long fib(long n) {
    if (n == 1 || n == 2) {
        count_fib++;
        return 1;
    } else return (fib(n - 1) + fib(n - 2));
}
long fibonacci(long n) {
    vector<long> v(n + 1, 0);
    v[1] = 1;
    v[2] = 1;
    for (long i = 3; i <= n; i++) v[i] = v[i - 1] + v[i - 2], count_fibo++;
    return v[n];
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    fib(n);
    fibonacci(n);
    cout << count_fib << " " << count_fibo;
}