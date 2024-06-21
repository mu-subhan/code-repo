class Solution {
public:
    int maxProduct(std::vector<int>& nums) {
        int n = nums.size();

        
        for (int i = 0; i < n - 1; ++i) {
            int maxIdx = i;
            for (int j = i + 1; j < n; ++j) {
                if (nums[j] > nums[maxIdx]) {
                    maxIdx = j;
                }
            }
            
            int temp = nums[maxIdx];
            nums[maxIdx] = nums[i];
            nums[i] = temp;
        }

    
        return (nums[0] - 1) * (nums[1] - 1);
    }
};