// // // ---------------------------------Kadane’s Algorithm--------------------------------------

// // Kadane’s Algorithm ek technique hai jo ek array ke andar lagatar (contiguous) elements ka maximum sum dhoondhne ke kaam aati hai.
// // Chahe array ke elements negative ho ya positive — ye algorithm har case mein kaam karta hai.

// // 🔹 Problem Statement (Simple Words):
// // "Ek integer array diya gaya hai, hume uske kisi bhi continuous subarray ka maximum sum nikalna hai."

// // 🔹 Kadane’s Algorithm Ki Soch (Intuition):
// // Har element par jaake hum yeh decide karte hain:

// // "Kya pehle wale sum ke saath is element ko jodna faydemand hoga ya nahi?"

// // Agar haan, toh jodenge.
// // Agar nahi (matlab sum negative ho gaya), toh wahi se naya subarray shuru kar denge.

// // 🔹 Example for Dry Run:
// // Input: nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
// // Iska output hoga: 6
// // Because 4 + (-1) + 2 + 1 = 6 is the maximum subarray sum.

// 🔸 Logic:
// Ek variable maxSum rakhenge – jo ab tak ka maximum sum store karega.

// Ek variable currentSum rakhenge – jo abhi tak ka running sum store karega.

// // Agar currentSum kabhi negative ho gaya, to hum use 0 reset kar denge.



// ---------------------------------code---------------------------------------------


#include<iostream>  // Input-output stream include kar rahe hain
using namespace std;

int main(){
    int n;
    cout<<"enter karo bhai array ka size :";  // User se array size maang rahe hain
    cin>>n;

    int arr[n];  // Fixed size array bana rahe hain user ke input ke basis par

    cout<<"enter "<< n << " elements : ";  // Array ke elements input lene ke liye
    for(int i=0; i<n; i++){
        cin>>arr[i];  // Array ke har element ko input le rahe hain
    }

    int maxsum = 0;        // Yeh variable maximum sum store karega
    int currentsum = 0;    // Yeh variable current subarray ka sum track karega

    // Kadane's Algorithm yahan start ho raha hai
    for(int i=0; i<n; i++){
        currentsum = currentsum + arr[i];  // Current element ko current sum mein jod rahe hain

        if(currentsum > maxsum){          // Agar current sum ab tak ke max sum se bada ho,
            maxsum = currentsum;          // to maxsum ko update kar do
        }

        if(currentsum < 0){               // Agar current sum negative ho jaye,
            currentsum = 0;               // to usse reset kar do (kyunki negative value future subarray ko ghata degi)
        }
    }

    // Final maximum subarray sum print kar rahe hain
    cout<<" Maximum subarray sum is : "<<maxsum<<endl;
    return 0;
}
