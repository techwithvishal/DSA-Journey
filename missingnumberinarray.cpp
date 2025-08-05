// --------------------------Problem Kya Keh Raha Hai?-----------------------------------------------

// Tumhare paas ek array nums hai jisme n distinct numbers hain.

// Yeh numbers 0 se n ke beech hote hain.
// Example: agar array me 3 numbers hain, toh numbers 0 se 3 ke beech hone chahiye (matlab 0, 1, 2, 3 me se koi 1 number missing hoga).

// Tumhe wo missing number dhoondhna hai.

// ✅ Example Samajh Lo:
// Input: nums = [3, 0, 1]
// Array size = 3 → iska matlab possible numbers = 0 to 3

// Range: 0, 1, 2, 3 → total 4 numbers hone chahiye, par array me 3 hi hain.

// Dekho: 0, 1, 3 hai → 2 missing hai

// ✅ Output: 2

// 🎯 Aim:
// Tumhe O(n) time me aur O(1) space me solution likhna hai.

// 💡 Approach 1: Sum Formula Method (Sabse Easy)
// 🧠 Logic:
// 0 + 1 + 2 + .... + n = n*(n+1)/2
// (Ye math ka formula hai total sum ka)

// Uske baad actual array ka sum nikaalo

// Fir dono ka difference kar do → missing number mil jayega

// 🔢 Dry Run:
// Input: [3, 0, 1]
// n = 3

// Total sum = 3 * (3 + 1) / 2 = 6

// Array ka sum = 3 + 0 + 1 = 4

// Missing = 6 - 4 = 2 ✅

// --------------------------------solution-----------------------------------------------------

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Array ka size daalo: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers (0 se " << n << " tak ke beech, ek number missing hoga):\n";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int total = n * (n + 1) / 2;  // Expected sum from 0 to n
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];  // Actual sum of entered elements
    }

    int missing = total - sum;  // Missing number
    cout << "Missing Number is: " << missing << endl;

    return 0;
}


// ----------------------------leetcode solution-------------------------------------------------

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();  // array ka size
//         int total = n * (n + 1) / 2;  // 0 se n tak ka expected sum
//         int sum = 0;

//         for(int i = 0; i < n; i++) {
//             sum += nums[i];
//         }

//         // total - sum = missing number
//         return total - sum;
//     }
// };
