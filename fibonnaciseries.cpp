// Fibonacci series ek aisi number sequence hoti hai jisme har next number pichle do numbers ka sum hota hai.
// Matlab agar tum first two numbers fixed rakh do, toh uske baad ke numbers woh dono ka sum ban jaate hain.



#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Kitne terms chahiye: ";
    cin >> n;

    int first = 0, second = 1;  // Pehle do numbers fix
    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; i++) {
        cout << first << " ";      // Current number print karo
        int next = first + second; // Next number banao
        first = second;            // Values shift karo
        second = next;
    }

    return 0;
}
