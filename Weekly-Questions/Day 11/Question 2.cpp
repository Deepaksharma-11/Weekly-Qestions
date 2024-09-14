#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=1; i<=n; i++) {
        cin >> arr[i];
    }
    cout << "Array- ";
    for (int i=1; i<=n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int target;
    cout << "Target- ";
    cin >> target;
    int index=-1;
    for (int i=1; i<=n; i++) {
        if (arr[i]==target) {
            index=i;
            break;
        }
    }
    cout << index << endl;
    
    return 0;
}