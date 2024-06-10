class Solution {
public:
    bool checkPerfectNumber(int num) {
      int sum=0;
        for(int i=1;i<num;i++){
            if(num%i==0){
                sum=sum+i;
            }
        }
        if(sum==num){
            return true;
        }
        return false;
    }
};















// aik for loop jo 1 sa ly kr num tak chly 
// agr num%i==0
// to sum[i]+=i