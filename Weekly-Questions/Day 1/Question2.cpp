#include<iostream>
using namespace std;

float Average(int a, int b, int c, int d, int e) {
    float f =(a+b+c+d+e)/5.0;
    return f;
}
int main() {
    
    int grade1, grade2, grade3, grade4, grade5;
    cout << "Enter grade 1: ";
    cin >> grade1;
    cout << "Enter grade 2: ";
    cin >> grade2;
    cout << "Enter grade 3: ";
    cin >> grade3;
    cout << "Enter grade 4: ";
    cin >> grade4;
    cout << "Enter grade 5: ";
    cin >> grade5;
    float avg = Average(grade1, grade2, grade3, grade4, grade5);
    cout << "The average grade is: " << avg <<endl;
    return 0;
}