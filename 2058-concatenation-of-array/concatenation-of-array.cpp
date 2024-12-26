class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> newarr(2*nums.size());
        for(int i=0;i<nums.size();i++){
            newarr[i]=nums[i];
            newarr[i+nums.size()]=nums[i];
        }
     return newarr;
    }
};