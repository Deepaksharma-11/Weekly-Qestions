#include <iostream>
using namespace std;
int LargestNumber(int a, int b, int c) {
    if(a>b && a>c) {
        return a;
    }
    else if(b>a && b>c) {
        return b;
    }
    return c;
}
 
int main() {
    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    int d = LargestNumber(a, b, c);
    cout << "The Largestnumber is: " << d << endl;
    return 0;
}