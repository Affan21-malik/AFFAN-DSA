/*
class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int left = 0;
        int ans = 0;
        int distinct = 0;
        int freq[100001] = {0};

        for (int right = 0; right < fruits.size(); right++) {

            freq[fruits[right]]++;

            if (freq[fruits[right]] == 1)
                distinct++;

            while (distinct > 2) {

                freq[fruits[left]]--;

                if (freq[fruits[left]] == 0)
                    distinct--;

                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};
*/