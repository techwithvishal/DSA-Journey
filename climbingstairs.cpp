// Climbing Stairs problem ka matlab hai:

// Tumhare paas n steps hain staircase mein.

// Har baar tum 1 step ya 2 steps upar ja sakte ho.

// Poocha hai total kitne alag-alag tareeke hain upar pahunchne ke.

// Example:
// Agar n = 3,
// Toh ways honge:

// 1 step + 1 step + 1 step

// 1 step + 2 steps

// 2 steps + 1 step
// Total 3 ways.

// Ye problem basically Fibonacci sequence jaisa hai, kyunki har step tak jane ke liye tum pichle ek step ya pichle do steps se aa sakte ho.





#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Number of stairs: ";
    cin >> n;

    int prev = 0, curr = 1;
    for (int i = 0; i < n; i++) {
        int temp = curr;
        curr = curr + prev;
        prev = temp;
    }

    cout << "Ways to climb " << n << " stairs: " << curr << endl;
    return 0;
}
