#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Array- ";
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int target;
    cout << "Target- ";
    cin >> target;
    bool found = false;
    for (int i=0; i<n; i++) {
        if (arr[i]==target) {
           found = true;
            break;
        }
    }
    if (found) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    
    
    return 0;
}
