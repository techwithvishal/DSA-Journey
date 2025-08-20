// -----------------------LeetCode 121 - Best Time to Buy and Sell Stock---------------------------

// Ek array diya tha prices[] jisme har din ka stock price tha.
// Hume ek hi baar buy aur ek hi baar sell karke maximum profit nikalna tha.
// Condition: Sell hamesha buy ke baad hona chahiye.

// Humne kya kiya:

// min_price rakha — ab tak ka sabse kam price track karne ke liye.

// Har din profit nikala: current_price - min_price.

// max_profit update kiya agar naya profit zyada mila.

// Poora kaam O(n) time me single loop se kiya.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Stock prices array (example input)
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int min_price = prices[0]; // Ab tak ka sabse kam price
    int max_profit = 0;        // Ab tak ka sabse zyada profit

    // Har din ke price ko check karo
    for (int i = 0; i < prices.size(); i++) {

        // Minimum buy price update karo
        if (prices[i] < min_price) {
            min_price = prices[i];
        }

        // Aaj bechne par profit kitna hoga
        int profit = prices[i] - min_price;

        // Maximum profit update karo
        if (profit > max_profit) {
            max_profit = profit;
        }
    }

    cout << "Maximum Profit: " << max_profit << endl;

    return 0;
}
