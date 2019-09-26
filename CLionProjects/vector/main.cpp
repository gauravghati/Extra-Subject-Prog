#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v1;
    vector<int> v2;

    for(int i=0; i<10; i++){
        v1.push_back(i+3);
        v2.push_back(i+3);
    }

    reverse(v2.begin(), v2.end());

    v1.push_back('4');

    if(!v1.empty()){
        cout << "Vector is not empty" << endl;
    } else {
        cout << "Vector is empty " << endl;
    }

    v1.pop_back();

    cout<< "v1 : " << endl;
    for(auto i : v1){
        cout<< i << endl;
    }

    cout << "--------------------------------\n";
    cout<< "v2 : " << endl;
    for(auto i : v2){
        cout<< i << endl;
    }

    cout << "--------------------------------\n";

    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << endl;
    }

    cout<<"front Element = " << v1.front() << endl;
    cout << "back Element = " << v1.back() << endl;

    v1.erase(find(v1.begin(), v1.end(),5));          //  erase function : delete specific element
    cout << "After erase() : ";
    for(auto i : v1)
        cout<< i <<" ";
    cout<<"\n";

    v1.swap(v2);

    cout<<"After Swap : \nv1 : ";
    for(auto i : v1){
        cout << i << " ";
    } cout << "\n";

    cout<< "v2 : ";
    for(auto i : v2){
        cout << i << " ";
    } cout << "\n";

    cout<< " After Inserting 3 in begin : ";
    auto it = v1.insert(v1.begin(), 3);
    for(auto it = v1.begin(); it != v1.end(); ++it)
        cout << *it << " ";
    cout << "\n";

    v1.clear();
    cout << "Size after clear : " << v1.size() << endl;

    return 0;
}
