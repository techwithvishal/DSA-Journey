#include<iostream>
using namespace std;

int main(){
    // Step 1: Array initialization
    int arr[]= {1, 2, 3, 4, 5, 6}; // original array
    int n = sizeof(arr)/sizeof(arr[0]); // array ka size calculate kiya

    // Step 2: Do pointer banaye — left aur right
    int left = 0, right = n - 1; // left start se, right end se

    // Step 3: Array ko reverse karne ke liye loop
    while(left < right){
        swap(arr[left], arr[right]); // left aur right wale elements ko swap kar diya
        left++;   // left pointer ko aage badhaya
        right--;  // right pointer ko peeche ki taraf laya
    }

    // Step 4: Reverse hone ke baad array ko print kiya
    cout << "Reversed array is : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
