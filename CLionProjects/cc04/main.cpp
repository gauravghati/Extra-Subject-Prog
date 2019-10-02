#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v1;
    
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        v1.push_back(x);
    }

    if(n <= 2){
        cout << 0;
        return 0;
    }

    sort(v1.begin(), v1.end());
    int max = * max_element(v1.begin(), v1.end());
    int min = * min_element(v1.begin(), v1.end());

    int sec_max = * max_element(v1.begin(), v1.end()-1);
    int sec_min = * min_element(v1.begin()+1, v1.end());

    if (max - sec_min > sec_max - min){
        cout << sec_max - min;
    } else {
        cout << max - sec_min;
    }

    return 0;
}
