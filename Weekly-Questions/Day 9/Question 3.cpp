#include<iostream>
using namespace std;
int main() {
    int num=1;
    int* ptr1=&num;
    int** ptr2=&ptr1;
    cout << num << endl << *ptr1 << endl << **ptr2;
    return 0;
}