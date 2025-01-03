class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int sum = 0;
        
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "--X") {
                sum -= 1; 
            } else if (operations[i] == "X++") {
                sum += 1;  
                } else if (operations[i] == "++X") {
                sum += 1;  
            } else if (operations[i] == "X--") {
                sum -= 1;  
            }
        }
        return sum;  
    }
};
