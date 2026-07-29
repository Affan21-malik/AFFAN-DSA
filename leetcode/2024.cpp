/*

class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
      int left=0;
        int Fcount=0;
        int makeAllF=0;
          int Tcount=0;
          int makeAllT=0;

        for(int right=0; right<answerKey.size();right++){
             if(answerKey[right]=='F'){
              Fcount++;}
                 
                while(Fcount>k){
              if(answerKey[left]=='F'){
                 Fcount--;}
               left++;
                
                }

                makeAllT=max(makeAllT,right-left+1);

          

        }

       
        
        left=0;

        for(int right=0; right<answerKey.size();right++){
             if(answerKey[right]=='T'){
              Tcount++;}
                 
                while(Tcount>k){
              if(answerKey[left]=='T'){
                 Tcount--;}
               left++;
                
                }

                makeAllF=max(makeAllF,right-left+1);

          

        }


        if(makeAllT>makeAllF){
            return makeAllT;
        }
        else{
            return makeAllF;
        }
        
    }
};
*/