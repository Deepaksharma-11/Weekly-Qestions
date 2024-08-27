#include <bits/stdc++.h>
using namespace std;
int add(int n1, int n2) {
    return n1 + n2;
}
int sub(int n1, int n2) {
    return n1 - n2;
}
int mul(int n1, int n2) {
    return n1 * n2;
}
float division(int n1, int n2) {
    return (float)n1/(float)n2;
}
int modulo(int n1, int n2) {
    return n1%n2;
}
int main() {
    int n1, n2;
    cout << "Enter first integer: ";
    cin >> n1;
    cout << "Enter second integer: ";
    cin >> n2;
    cout << "Addition: " << add(n1, n2) << endl;
    cout << "Subtraction: " << sub(n1, n2) << endl;
    cout << "Multiplication: " << mul(n1, n2) << endl;
    cout << "Division: " << division(n1, n2) << endl;
    cout << "Modulus: " << modulo(n1, n2) << endl;
    
    return 0;
}