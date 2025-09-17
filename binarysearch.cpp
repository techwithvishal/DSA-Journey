#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target to search: ";
    cin >> target;

    int start = 0;
    int end = n - 1;
    int mid;
    bool found = false;

    while (start <= end) {
        mid = (start + end) / 2;   // mid nikalna

        if (arr[mid] == target) {   // target mil gaya
            cout << "Element found at index " << mid << endl;
            found = true;
            break;
        }
        else if (target > arr[mid]) {   // right me search karo
            start = mid + 1;
        }
        else {                          // left me search karo
            end = mid - 1;
        }
    }

    if (!found) {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
