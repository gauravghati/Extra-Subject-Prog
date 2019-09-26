#include <iostream>
#include <string>
#include <algorithm>
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

    reverse(first_string.begin(), first_string.end());
    cout<<"Reversed First String :"<<first_string;

    cout<<"\nEnter a line: ";
    string third_string;
    getline(cin, third_string);         //will cin whole line
//  cin>>third_string;                         //will give only one word of the line
    cout<<"\nYour Line : "<<third_string;

    return 0;
}

// OUTPUT :

// Hey, I am Batman
// and i am from PICT
// Jey, I am Batman
// After push_back from first string :Jey, I am Batmans
// After pop_back from the string :Jey, I am Batman
// Length of the String :16
// After swap :
// First String : and i am from PICT
// Second string : Jey, I am Batman
// Reversed First String :TCIP morf ma i dna
// Enter a line: Hey How are you
//
// Your Line : Hey How are you