#include <iostream>
#include <string>
using namespace std;

int main() {
    string first_string = "Hey, I am Batman";
    string sec_string = "and i am from PICT";

    cout<<first_string<<endl;
    cout<<sec_string<<endl;

    first_string[0] = 'J';
    cout << first_string << endl;

    first_string.push_back('s');
    cout<<"After push_back from first string :"<<first_string<<endl;

    first_string.pop_back();
    cout<<"After pop_back from the string :"<<first_string<<endl;

    cout<<"Length of the String :"<<first_string.length()<<endl;

    first_string.swap(sec_string);

    cout<<"After swap :\nFirst String : "<<first_string<<endl;
    cout<<"Second string : "<<sec_string<<endl;

    cout<<"\nEnter a line: ";
    string third_string;
    getline(cin, third_string);         //will cin whole line
//  cin>>third_string;                         //will give only one word of the line
    cout<<"\nYour Line : "<<third_string;

    return 0;
}
