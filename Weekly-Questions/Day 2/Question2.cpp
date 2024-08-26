#include<iostream>
using namespace std;
char Grading(int a) {
    if (a >= 90 && a <= 100) {
        cout << "A";
    }
    else if (a >= 80 && a <= 89) {
        cout << "B";
    }
    else if (a >= 70 && a <= 79) {
        cout << "C";
    }
    else if (a >= 60 && a <= 69) {
        cout << "D";
    }
    else if(a >= 0 && a <= 59) {
        cout << "F";
    }
    return 0;
}
int main() {
    int a;
    cout << "Enter the score: ";
    cin >> a;
    
    cout << "Grade: " << Grading(a) << endl;
    return 0;
}