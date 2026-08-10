/*
class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.size() > s2.size())
            return false;

        int freq1[128] = {0};
        int freq2[128] = {0};

        // s1 ki frequency
        for (int i = 0; i < s1.size(); i++) {
            freq1[s1[i]]++;
        }

        int left = 0;

        for (int right = 0; right < s2.size(); right++) {

            freq2[s2[right]]++;

            // Window size bada ho gaya
            if (right - left + 1 > s1.size()) {
                freq2[s2[left]]--;
                left++;
            }

            // Window size equal hai
            if (right - left + 1 == s1.size()) {

                bool same = true;

                for (int i = 0; i < 128; i++) {
                    if (freq1[i] != freq2[i]) {
                        same = false;
                        break;
                    }
                }

                if (same)
                    return true;
            }
        }

        return false;
    }
};

*/