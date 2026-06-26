#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;       // Buy day
        int right = 1;      // Sell day
        int max_profit = 0; // Maximum profit

        while (right < prices.size()) {

            if (prices[left] < prices[right]) {
                int current_profit = prices[right] - prices[left];
                max_profit = max(max_profit, current_profit);
            } else {
                left = right;
            }

            right++;
        }

        return max_profit;
    }
};

int main() {
    Solution obj;

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "Maximum Profit = " << obj.maxProfit(prices) << endl;

    return 0;
}
/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;       // Left pointer = Kharidne ka din (Buy Day)
        int right = 1;      // Right pointer = Bechne ka din (Sell Day)
        int max_profit = 0; // Sabse bada fayda track karne ke liye

        // Right pointer pure array ke end tak travel karega
        while (right < prices.size()) {
            
            // Case 1: Agar kharidne ka daam bechne ke daam se sasta hai (Profit ho raha hai!)
            if (prices[left] < prices[right]) {
                int current_profit = prices[right] - prices[left];
                max_profit = max(max_profit, current_profit); // max() function dono me se bada nikalega
            } 
            // Case 2: Agar aaj ka daam hamare purane buy daam se bhi sasta mil gaya!
            else {
                left = right; // Hum apna Buy Day badal kar aaj ka din bana denge
            }
            
            // Har round mein bechne ke liye agle din par jana hi hai
            right++;
        }

        return max_profit;
    }
};

*/