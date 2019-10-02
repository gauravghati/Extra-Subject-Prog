#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i= 0; i<t; i++){
        int n, m;
        cin >> n >> m;

        int arr[m];
        int cor_arr[n];

        for(int j =0; j<m; j++){
            cin >> arr[j];
        }

        for(int j= 0; j<n; j++){
            cor_arr[j] = j + 1;
        }

        for(int j= 0; j< m; j = j + n){
            sort(j + arr, j + arr + n);
        }

        int div = m / n;
        int rem = m % n;
        bool is_right = true;
        
        for(int j= 0; j<(m - rem); j=j+n){
            for(int k=0; k<n; k++){
                cout << arr[k]<< " " << arr[k+j] << endl;
                if(cor_arr[k] != arr[k+j]){
                    is_right = false;
                }
            }
        }

        if (rem != 0){
                for(int j=0; j<n; j++){

                }
        }

        if (!is_right){
            cout << "NO";
        } else {
            cout << "YES";
        }
    }
    return 0;
}
