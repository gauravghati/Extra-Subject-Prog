//        int num, power;
//        cin >> num >> power;
//        int sum = 0;
//        num = pow(num, power);
//        int rem = 0;
//        while(sum > 9 || sum == 0){
//            if (sum != 0) {
//                num = sum;
//                sum = 0;
//            }
//            while(num > 0) {
//                rem = num % 10;
//                sum += rem;
//                num = num / 10;
//            }
//        }
//        cout << sum << "\n";

#include <bits/stdc++.h>
using namespace std;
# define ll long long

int main() {
    std::ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int c, n, x;
        cin >> n >> c;
        vector<ll> arr;
        for(int i=0; i<n; i++){
            cin >> x;
            arr.push_back(x);
        }

        int cow_arr[c];

        for(int i=0; i<c; i++){

        }
    }
}
