#include <bits/stdc++.h>
using namespace std;

int countCharacter(string &str, char ch) {
    int count = 0;
    for(int i=0; i<str.length(); i++) {
        if (str[i]==ch) {
            count++;
        }
    }
    return count;
}
int main() {
    string str;
    char ch;
    cout << "Str1: ";
    cin >> str;
    cout << "Character: ";
    cin >> ch;
    int result = countCharacter(str,ch);
    cout << result;
    return 0;
}