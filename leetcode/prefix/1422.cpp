/*
class Solution {
public:
    int maxScore(string s) {
        int totalOnes=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
              totalOnes++;
            }
        }
        
        int leftZeros=0;
        int ans=0;
        for(int i=0;i<s.size()-1;i++){
        if(s[i]=='0'){
              leftZeros++;
            }


            else{
                totalOnes--;
            }

          int score = leftZeros + totalOnes;

          ans=max(ans,score);
        
        }
        return ans;
    }
};
*/
// pehle totalones nikala fir fir ab asa kr rhe h left sa gin rhe h agr zero aya to zeros ++ 
// agr 1 aya to totalones-- kyoki udhar wala one split hokr left side m chla gya ab ham ginte h 
// left side k zeros or total ones to score aga asi krte rhenge jo jada score hoga bo answer hoga ok 