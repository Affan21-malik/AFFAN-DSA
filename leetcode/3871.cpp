/*
class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        if(n<1000){
            
          return 0;
        }
        if(n<=999999){
        return n-999;

        }
        ans += 999999 - 999;

        if (n <= 999999999) {
            ans += (n - 999999) * 2;
            return ans;
        }

        ans += (999999999 - 999999) * 2;

        if (n <= 999999999999LL) {
            ans += (n - 999999999) * 3;
            return ans;
        }

        ans += (999999999999LL - 999999999) * 3;

        ans += (n - 999999999999LL) * 4;
        if (n >= 1000000000000000LL)
    ans += n - 999999999999999LL;

        return ans;
    }
};
*/