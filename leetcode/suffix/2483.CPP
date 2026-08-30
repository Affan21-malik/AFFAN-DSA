/*
class Solution {
public:
    int bestClosingTime(string customers) {

        int n = customers.size();

        vector<int> suffixY(n + 1, 0);

        // Suffix count of Y
        for (int i = n - 1; i >= 0; i--) {

            suffixY[i] = suffixY[i + 1];

            if (customers[i] == 'Y') {
                suffixY[i]++;
            }
        }

        int leftN = 0;
        int minPenalty = INT_MAX;
        int ans = 0;

        for (int i = 0; i <= n; i++) {

            int penalty = leftN + suffixY[i];

            if (penalty < minPenalty) {
                minPenalty = penalty;
                ans = i;
            }

            if (i < n && customers[i] == 'N') {
                leftN++;
            }
        }

        return ans;
    }
};
*/

// N+1 YE hai size or 0 kha se start h  then ham suffix ki help sa y count krenge fir then left sa N count krenge 
 //Penalty:
 //Shop closed ho aur customer Y aaye → +1 
 //Shop open ho aur customer N aaye → +1
 // hme min panelty nikalkr btana h ki kis index pr ayegi or i=2 k mtlb h ki suru k 2 k baad bndh hofyi dukan 
 // then tum jo bnd hone k baad h uske hisab sa penalty pta kr sakte h or smjh n aye to chat gpt krke dry run sa smjhlena


