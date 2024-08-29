#include<iostream>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int vowels = 0, consonants = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels++;
        }
        
        else if (c >= 'a' && c <= 'z') {
            consonants++;
        }
    }
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
    return 0;
}