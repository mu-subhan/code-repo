class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     int res;
     for(int i=0;i<nums.size();i++){
        res=nums[i]*nums[i];
        nums[i]=res;
     }   
     sort(nums.begin(),nums.end());
     return nums;
    }
};