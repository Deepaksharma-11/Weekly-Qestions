#include<bits/stdc++.h>
using namespace std;
bool isPlaindrome(string &str) {
    string cleanedstr="";
    for (int i=0; i<str.length(); i++) {
        if (isalnum(str[i])) {
            cleanedstr+=tolower(str[i]);
        }
    }
    int left=0;
    int right = cleanedstr.length()-1;
    while(left<right) {
        if (cleanedstr[left]!=cleanedstr[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main() {
    string str;
    getline(cin,str);
    cout << boolalpha << isPlaindrome(str);
    return 0;
}