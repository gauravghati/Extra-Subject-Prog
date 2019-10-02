/*
Polycarp loves ciphers. He has invented his own cipher called repeating.

Repeating cipher is used for strings. To encrypt the string s=s1s2…sm (1≤m≤10), Polycarp uses the following algorithm:

he writes down s1 ones,
he writes down s2 twice,
he writes down s3 three times,
...
he writes down sm m times.
For example, if s="bab" the process is: "b" → "baa" → "baabbb". So the encrypted s="bab" is "baabbb".

Given string t — the result of encryption of some string s. Your task is to decrypt it, i. e. find the string s.

Input
The first line contains integer n (1≤n≤55) — the length of the encrypted string. The second line of the input contains t — the result of encryption of some string s. It contains only lowercase Latin letters. The length of t is exactly n.

It is guaranteed that the answer to the test exists.

Output
Print such string s that after encryption it equals t.

Examples
Input
6
baabbb
Output
bab
Input
10
ooopppssss
Output
oops
Input
1
z
Output
z

 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    int len;
    cin >> len;
    string s;
    cin>>s;

    vector<int> v1;

    int i = 1;
    int count = 2;
    while(i<s.length()){
        for(int j=i+1; j< i+count; j++){
            if(s[i]==s[j]){
                v1.push_back(j);
            }
        }
        i = i + count;
        count ++;
    }

    for(int i=0; i<s.length(); i++){
        if(find(v1.begin(), v1.end(), i)==v1.end()){
            cout << s[i];
        }
    }

    return 0;
}
