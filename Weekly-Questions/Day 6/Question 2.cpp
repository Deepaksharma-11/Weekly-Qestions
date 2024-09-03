#include<iostream>
using namespace std;
int main() {
    int n, osum = 0, esum = 0;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array: " << endl;
    for (int i = 0; i<n;i++) {
        cin >> arr[i];
    }
    for (int i = 0;i<n;i++) {
        if (arr[i]%2==0) {
            esum+=arr[i];
        }
        else {
            osum+=arr[i];
        }
    }
    cout << "Sum of odd numbers: " << osum << endl;
    cout << "Sum of even numbers: " << esum << endl;
    return 0;
}