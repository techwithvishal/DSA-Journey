// ------------------------------✅ Problem: Check Duplicate in Array---------------------------


// ✅ Approach (Points mein samjho):
// Set use kiya gaya hai kyunki:

// Set automatically unique values store karta hai.

// Jab hum koi value insert karte hain jo already set mein hai, toh wo insert nahi hoti – yahin se hume duplicate ka pata chalega.

// Agar koi value pehle se set mein hai, toh return true (duplicate mil gaya).

// Agar poore loop ke baad koi duplicate na mile, toh return false.







#include<iostream>
#include<set> // Set use karne ke liye ye header chahiye
using namespace std;

int main(){
    int n;
    cout << "Array ka size daalo: ";
    cin >> n;

    int nums[n];
    cout << "Array ke " << n << " elements daalo: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];  // Array input le rahe hain
    }

    set<int> s;  // Set bna rahe hain jisme unique elements store honge

    // Array ke har element pe loop chalega
    for(int i = 0; i < n; i++){
        if(s.find(nums[i]) != s.end()){
            // Agar current element pehle se set mein hai toh duplicate mil gaya
            cout << "Duplicate mil gaya: " << nums[i] << endl;
            cout << "Output: true" << endl;
            return 0;  // Program yahi end ho jayega
        }
        // Agar element set mein nahi mila toh usse insert kar do
        s.insert(nums[i]);
    }

    // Agar pura loop chal gaya bina duplicate mile toh
    cout << "Koi duplicate nahi mila!" << endl;
    cout << "Output: false" << endl;
    return 0;
}
