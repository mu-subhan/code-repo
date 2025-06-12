// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         for (int i=0;i<nums.size()-1;i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]==0 && nums[j]!=0) swap(nums[i],nums[j]);
//             }
//         }
//     }
// };

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroPos = 0; 
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[nonZeroPos++] = nums[i];
            }
        }
        while (nonZeroPos < nums.size()) {
            nums[nonZeroPos++] = 0;
        }
    }
};