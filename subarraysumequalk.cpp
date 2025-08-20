// Problem 560: Subarray Sum Equals K (Hinglish Explanation)
// Problem Kya Hai?
// Tumhe ek integer array (nums[]) aur ek integer k diya gaya hai.

// Tumhe batana hai: Kitne continuous subarrays hain jinka sum exactly k hota hai.

// Yani array ke lagatar elements ko group karo, sum nikaalo, k ke equal ho to count badhao.

// Example:
// text
// nums = [1, 2, 3], k = 3

// Kaunse subarrays banenge?
// [1] -> sum = 1
// [1, 2] -> sum = 3 (✓)
// [1, 2, 3] -> sum = 6
// [2] -> sum = 2
// [2, 3] -> sum = 5
// [3] -> sum = 3 (✓)

// To answer = 2, kyunki do subarrays hain jinka sum 3 hai.



#include <iostream>
using namespace std;

int main() {
    int nums[] = {1, 2, 3};               // Input array
    int k = 3;                             // Target sum
    int size = sizeof(nums) / sizeof(nums[0]); // Array ka size
    int count = 0;                         // Count store karega kitne subarrays ka sum == k hai

    // Brute force: har possible subarray ka sum check karenge
    for (int start = 0; start < size; start++) { // Outer loop: subarray ka starting index
        int sum = 0;                             // Yeh variable subarray ka sum store karega
        for (int end = start; end < size; end++) { // Inner loop: subarray ka ending index
            sum += nums[end];                      // Current element ko sum me add kar rahe hain
            if (sum == k) {                        // Agar sum k ke equal aa gaya
                count++;                           // Matching subarray mila, count badhao
            }
        }
    }

    cout << "Count of subarrays: " << count << endl; // Final answer print karo
    return 0; // Successful exit
}
