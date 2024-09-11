#include <bits/stdc++.h>
using namespace std;
int strLength (string &str) {
    int count = 1;
    for (int i=0; i<'\0';i++) {
        count+=1;
    }
    return count;
}
int main() {
    string str;
    cout << "Str1: ";
    cin >> str;
    int length = strLength(str);
    cout <<"Str lenght: " << length;
    return 0;
}