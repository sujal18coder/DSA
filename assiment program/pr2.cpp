#include <iostream>
using namespace std;

int countDigit(long long n, int d) {
    int count = 0;

    // Special case when number is 0
    if (n == 0 && d == 0)
        return 1;

    while (n > 0) {
        int digit = n % 10;

        if (digit == d)
            count++;

        n /= 10;
    }

    return count;
}

int main() {
    long long n;
    int d;

    cin >> n >> d;

    cout << countDigit(n, d);

    return 0;
}
