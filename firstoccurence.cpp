#include <iostream>
using namespace std;

int main() {
    // Array with duplicate elements
    int arr[] = {10, 20, 20, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 20; // Target element
    int s = 0;    // Start index
    int e = n - 1; // End index
    int ans = -1; // Reference variable (answer ko store karega)

    // Binary Search loop
    while (s <= e) {
        int mid = s + (e - s) / 2;  // Mid nikalna

        if (arr[mid] == key) {
            ans = mid;   // Index store karo
            e = mid - 1; // Left side me check karte raho (pehla occurrence dhoondhne ke liye)
        }
        else if (key > arr[mid]) {
            s = mid + 1; // Right side me jao
        }
        else {
            e = mid - 1; // Left side me jao
        }
    }

    if (ans != -1)
        cout << "First occurrence of " << key << " is at index " << ans << endl;
    else
        cout << "Element not found in array" << endl;

    return 0;
}
