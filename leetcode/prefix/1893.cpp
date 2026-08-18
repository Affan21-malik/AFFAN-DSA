/*
class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int diff[52]={0};
        for(auto &range :ranges){
            int l = range[0];
            int r = range[1];

            diff[l]++;
            diff[r + 1]--;
        }
        int count =0;

         for (int i = 1; i <= 50; i++) {

            count += diff[i];
           if (i >= left && i <= right && count == 0) {
                return false;
            }
        }
        return true;
    }
};

jada hard nhi h ok ek baar dubara smjhna h concept ok
*/