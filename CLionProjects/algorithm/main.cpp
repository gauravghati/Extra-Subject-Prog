#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> v1 = {3,5,1,6,8,9,2,65,4,3,34,4,7,4};

    cout<<"Vector : ";
    for(auto i : v1){

        cout << i << " ";
    } cout << "\n";

    cout << "Vector after swap : ";
    sort(v1.begin(), v1.end());
    for(auto i : v1){

        cout << i << " ";
    } cout << "\n";

    v1.erase(find(v1.begin(), v1.end(), 2));

    cout<<"Vector After Erase 2 : ";
    for(auto i : v1){

        cout << i << " ";
    } cout << "\n";

    cout <<"Max Element : "<< * max_element(v1.begin(), v1.end()) << endl;
    cout << "Min Element : " << * min_element(v1.begin(), v1.end()) << endl;

    reverse(v1.begin(), v1.end());
    cout<<"Vector After Reverse : ";
    for(auto i : v1){
        cout << i << " ";
    } cout << "\n";

    cout << "Count of 4 in the list : " << count(v1.begin(), v1.end(), 4) << endl;

    cout << (find(v1.begin(), v1.end(), 5) == v1.end() ? "element 5 not found" : "Element 5 Found") << endl;

    cout << "Binary Search : " <<  (binary_search(v1.begin(), v1.end(),5) ? "not Found 5 element" :
                                                                                    "Found 5 element") << endl;

    v1.erase(unique(v1.begin(), v1.end()), v1.end());
    cout<<"Vector After Deleting  duplicated element : ";
    for(auto i : v1){
        cout << i << " ";
    } cout << "\n";

    return 0;
}


