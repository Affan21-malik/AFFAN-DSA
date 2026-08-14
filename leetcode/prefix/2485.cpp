/*
class Solution {
public:
    int pivotInteger(int n) {

        int totalSum = n * (n + 1) / 2;  ye smjh n aye kase kre h total ok 

        int leftSum = 0;

        for (int x = 1; x <= n; x++) {

            leftSum += x;

            int rightSum = totalSum - leftSum + x;

            if (leftSum == rightSum) {
                return x;
                
            }
        }

        return -1;
    }
};


leftSum = 21

rightSum = 36 - 21 + 6
         = 21



*/
/*

class Solution {
public:
    int pivotInteger(int n) {

        vector<int> prefix(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            prefix[i] = prefix[i - 1] + i;
        }

        int totalSum = prefix[n];

        for (int x = 1; x <= n; x++) {

            int leftSum = prefix[x];

            int rightSum = totalSum - prefix[x - 1];

            if (leftSum == rightSum) {
                return x;
            }
        }

        return -1;
    }
};


leftSum  = prefix[6] = 21

rightSum = prefix[8] - prefix[5]
         = 36 - 15
         = 21

*/