#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40};
    int* ptr = arr;
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<size; i++) {
        cout << *(ptr+i) << " ";
    }
    return 0;
}