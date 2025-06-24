class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

      for(int &res:nums){
        res=res*res;
              }  
      sort(nums.begin(), nums.end());
      return nums;
    }
};