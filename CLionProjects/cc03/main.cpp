#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> getPrime(ll n){
    vector<int> v1;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (ll p=2; p*p<=n; p++){
        if (prime[p]){
            for (ll i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (ll p=2; p<=n; p++)
        if (prime[p])
            v1.push_back(p);
    return v1;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    ll arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll max_of_arr = arr[0];
    for (int i = 0; i < n; i++) {
        if (max_of_arr < arr[i]) {
            max_of_arr = arr[i];
        }
    }

    vector<int> primes = getPrime(sqrt(max_of_arr));

    double x;
    double fracPart = 0;
    double intPart = 0;

    for (int i = 0; i < n; i++) {
        x = sqrt(arr[i]);
        fracPart = modf(x, &intPart);
        if (fracPart == 0 && binary_search(primes.begin(), primes.end(), intPart)) {
            cout << "YES\n";
        } else { cout << "NO\n"; }
    }

    return 0;
}
