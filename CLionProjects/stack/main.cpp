#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

void show_stack(stack<int> s){
    cout << " Stack is :";
    while(!s.empty()){
        cout << " " << s.top();
        s.pop();
    }
    cout << "\n";
}

int main() {

    stack<int> s1;
    stack<int> s2;

    for(auto i=0; i<10; i++){
        s1.push(i+3);
    }

    cout << "Size : "<< s1.size() << endl;
    cout << "top : " << s1.top() << endl;

    show_stack(s1);

    for(auto i=0; i<10; i++){
        s2.push(i+5);
    }

    cout << "Size : "<< s2.size() << endl;
    cout << "top : " << s2.top() << endl;

    show_stack(s2);

    s1.swap(s2);

    cout << "Swaped String : " << endl;
    show_stack(s1);
    show_stack(s2);

    return 0;
}

/*
OUTPUT  :

Size : 10
top : 12
Stack is : 12 11 10 9 8 7 6 5 4 3
Size : 10
top : 14
Stack is : 14 13 12 11 10 9 8 7 6 5
Swaped String :
Stack is : 14 13 12 11 10 9 8 7 6 5
Stack is : 12 11 10 9 8 7 6 5 4 3
*/
