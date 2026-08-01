/*
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if (p.size() > s.size())
            return ans;

        int freq1[128] = {0};
        int freq2[128] = {0};

        // Pattern ki frequency
        for (int i = 0; i < p.size(); i++) {
            freq1[p[i]]++;
        }

        int left = 0;

        for (int right = 0; right < s.size(); right++) {

            // Current window ki frequency
            freq2[s[right]]++;

            // Window size fix rakho
            if (right - left + 1 > p.size()) {
                freq2[s[left]]--;
                left++;
            }

            // Window size pattern ke equal ho
            if (right - left + 1 == p.size()) {

                bool same = true;

                for (int i = 0; i < 128; i++) {
                    if (freq1[i] != freq2[i]) {
                        same = false;
                        break;
                    }
                }

                if (same)
                    ans.push_back(left);
            }
        }

        return ans;
    }
};
*/