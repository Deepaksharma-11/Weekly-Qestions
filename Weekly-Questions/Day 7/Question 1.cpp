#include<iostream>
using namespace std;
int main() {
    int n, osum = 0, esum = 0;
    cout << "N: ";
    cin >> n;
    int arr[n];
    cout << "arr[]: " ;
    for (int i = 0; i<n;i++) {
        cin >> arr[i];
    }
    for (int i=0; i<=n-1;i++) {
        bool flag = true;
        for (int j = 0; j<n-1;j++) {
            if (arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if (flag==true) break;
    }
    for (int i = 0; i<n;i++) {
        cout << arr[i];
    }
    
    return 0;
}