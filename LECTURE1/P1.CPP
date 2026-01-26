#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for( int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++){
        cout<< col;
        }
        cout<<endl;
    }
    return 0;
}
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }
