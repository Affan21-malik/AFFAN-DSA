/*
class Solution {
public:
    int minimumRecolors(string blocks, int k) {

        int n = blocks.length();
        int whiteCount = 0;

        // First Window
        for (int i = 0; i < k; i++) {

            if (blocks[i] == 'W') {
                whiteCount++;
            }
        }

        int minCount = whiteCount;

        // Sliding Window
        for (int i = k; i < n; i++) {

            if (blocks[i - k] == 'W') {
                whiteCount--;
            }

            if (blocks[i] == 'W') {
                whiteCount++;
            }

            minCount = min(minCount, whiteCount);
        }

        return minCount;
    }
};
*/