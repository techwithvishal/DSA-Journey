
// ----------------------------PROBLEM STATEMENT-----------------------------------------

// ✅ Problem Statement Explanation
// Aapko ek array diya gaya hai, aur ek target sum.
// Aapko array me se aise 3 numbers (triplets) find karne hain jinka sum exactly target ke barabar ho.
// Aur un triplets ko print karna hai.

// 🎯 Example:
// Input:
// Array = [1, 2, 3, 4, 5, 6, 7]
// Target = 12
// Output:

// (1, 4, 7)
// (1, 5, 6)
// (2, 3, 7)
// (2, 4, 6)
// (3, 4, 5)

// ----------------------------------------Approach-------------------------------------------------------

// ✅ Kya karna hai?
// Array ke har 3 elements ka combination check karna.

// Agar unka sum target ke equal hai → print karo.

// Ye approach brute force hai (O(n³) complexity).

// 🟢 Code me kya kiya humne? (Short Points)
// Array & Target define kiya.

// 3 nested loops lagaye (i, j, k) → har 3 number ka combination check kare.

// Condition if(arr[i] + arr[j] + arr[k] == target) → match hone par triplet print kiya.

// Output me saare valid triplets print ho gaye.

// ✅ Loop Logic in Easy Words
// Outer loop (i)

// Pehle number choose karta hai.

// Ye 0 se n-3 tak chalta hai (kyunki hamesha 3 elements chahiye).

// Middle loop (j)

// Second number choose karta hai.

// Hamesha i+1 se start hota hai (taaki same element dobara na aaye).

// Ye n-2 tak chalta hai.

// Inner loop (k)

// Third number choose karta hai.

// Hamesha j+1 se start hota hai (duplicate avoid karne ke liye).

// Ye n-1 tak chalta hai.

// Condition check

// Har triplet (arr[i], arr[j], arr[k]) ka sum check hota hai.

// Agar sum target ke equal hai → print kar do.

// ------------------------------------Solution---------------------------------------------------

// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target = 12;

//     cout << "Triplets with sum = " << target << " are:\n";

//     for (int i = 0; i < n - 2; i++) {
//         for (int j = i + 1; j < n - 1; j++) {
//             for (int k = j + 1; k < n; k++) {
//                 if (arr[i] + arr[j] + arr[k] == target) {
//                     printf("(%d, %d, %d)\n", arr[i], arr[j], arr[k]); // short & clean
//                 }
//             }
//         }
//     }
//     return 0;
// }

// -------------------------------------------------------------------------------------------------







// #include<iostream>
// using namespace std;

// // Ye function array me se aise 3 numbers (triplets) print karega jinka sum target ke barabar ho
// void printTriplets(int arr[], int n, int target) {
//     cout << "Triplets with sum = " << target << " are:" << endl;

//     // Pehla element select karne ke liye loop
//     for(int i = 0; i < n - 2; i++) {
//         // Dusra element select karne ke liye loop
//         for(int j = i + 1; j < n - 1; j++) {
//             // Teesra element select karne ke liye loop
//             for(int k = j + 1; k < n; k++) {
//                 // Yahan check kar rahe hain ki kya in teeno ka sum target ke barabar hai
//                 if(arr[i] + arr[j] + arr[k] == target) {
//                     // Agar haan, to triplet print karo
//                     cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")" << endl;
//                 }
//             }
//         }
//     }
// }

// int main() {
//     // Array banaya jisme kuch elements diye gaye hain
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};

//     // Array ka size nikaala (total size / ek element ka size)
//     int size = sizeof(arr) / sizeof(arr[0]);

//     // Target sum jiska match karna hai
//     int target = 12;

//     // Function call kiya triplets print karne ke liye
//     printTriplets(arr, size, target);

//     return 0;
// }
// ---------------------------------Practice-----------------------------------------------------

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array :";
    cin>>n;

    int arr[n];
    cout<<"enter "<< n << " elements :";
    for(int i =0; i<n; i++){
        cin >>arr[i];
    }

    int target;
    cout<<"enter target element jinka 3 sum karkr target k equal aaye :";
    cin>>target;

//   Aab hum nested loop lgayenge 3 

for(int i=0; i<n-2; i++){
    for(int j = i+1; j<n-1; j++){
        for(int k = j+1; k<n; k++){
            if(arr[i]+arr[j]+arr[k]==target){
                printf("(%d %d %d)\n", arr[i],arr[j],arr[k]);
            }
        }
    }
}

}