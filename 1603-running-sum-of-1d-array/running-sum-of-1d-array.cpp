class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>sum(nums.size(),0);
        int cursum=0;
        for(int i=0;i<nums.size();i++){
        cursum +=nums[i];
        sum[i]=cursum;
        
        }
        return sum;

    }
};