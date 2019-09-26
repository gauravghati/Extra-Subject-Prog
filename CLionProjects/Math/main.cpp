#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << max(4.5555 , -5.44) << endl;       //  5            doesn't belong from cmath header
    cout << min(3,6) << endl;       //  3

    cout << sqrt(64) << endl;
    cout << round(3.999999999) << endl;   // 3
    cout << round(2.1111111111) << endl;   // 2

    cout << ceil(4.3333333) << endl;  // 5
    cout << floor(2.777777) << endl;  // 2

    cout << pow(2, 4) << endl;      // 2^4 = 16

    cout << fabs(-3.66666666666) << endl;          // non negative value

    cout << fmod(5, 3) << endl;                // mod of 5 by 3 = 2

    return 0;
}
// OUTPUT :
// 4.5555
// 3
// 8
// 4
// 2
// 5
// 2
// 16
// 3.66667
// 2