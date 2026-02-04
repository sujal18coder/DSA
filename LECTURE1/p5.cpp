#include <iostream>
using namespace std;

int main() {
    int n = 5;   // number of rows

    for(int i = 1; i <= n; i++) {        // outer loop → rows
        for(int j = 1; j <= i; j++) {    // inner loop → stars
            cout << "*";
        }
        cout << endl;  // move to next line
    }

    return 0;
}
