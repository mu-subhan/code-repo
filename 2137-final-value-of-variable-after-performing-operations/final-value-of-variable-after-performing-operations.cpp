class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
       int sum =0;
       for(const string& op: operations){
        if(op=="--X" || op=="X--") sum=sum-1;
        else if(op=="++X"||op =="X++") sum = sum+1;
       } 
       return sum;
    }
};