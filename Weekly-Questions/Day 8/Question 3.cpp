#include <bits/stdc++.h>
using namespace std;
void concatenateStrings( string &str1, string &str2) {
    cout << str1+str2;
}
int main() {
    string str1, str2;
    cout << "Str1: ";
    cin >> str1 ;
    cout << "Str2: ";
    cin >> str2;
    concatenateStrings(str1, str2);
   
    return 0;
}