/*
class StockSpanner {
public:

    vector<int> price;
    stack<int> s;

    StockSpanner() {

    }

    int next(int val) {

        price.push_back(val);

        int i = price.size() - 1;

        while (s.size() > 0 && price[s.top()] <= price[i]) {
            s.pop();
        }

        int span;

        if (s.empty()) {
            span = i + 1;
        }
        else {
            span = i - s.top();
        }

        s.push(i);

        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {

    // Stock prices
    vector<int> input = {100, 80, 60, 70, 60, 75, 85};

    // Solution
    vector<int> price;
    vector<int> ans;
    stack<int> s;

    for (int val : input) {

        price.push_back(val);

        int i = price.size() - 1;

        while (s.size() > 0 && price[s.top()] <= price[i]) {
            s.pop();
        }

        int span;

        if (s.empty()) {
            span = i + 1;
        }
        else {
            span = i - s.top();
        }

        ans.push_back(span);

        s.push(i);
    }

    // Print answer
    for (int val : ans) {
        cout << val << " ";
    }

    cout << endl;

    return 0;
}