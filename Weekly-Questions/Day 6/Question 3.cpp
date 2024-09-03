#include<iostream>
using namespace std;
int main() {
    int n, nodd = 0, neven = 0;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array: " << endl;
    for (int i = 0; i<n;i++) {
        cin >> arr[i];
    }
    for (int i = 0;i<n;i++) {
        if (arr[i]%2==0) {
            neven+=1;
        }
        else {
            nodd+=1;
        }
    }
    cout << "Number of odd numbers: " << nodd << endl;
    cout << "Number of even numbers: " << neven << endl;
    return 0;
}