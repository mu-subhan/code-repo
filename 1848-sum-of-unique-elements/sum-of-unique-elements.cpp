class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            bool isUnique = true;

            for (int j = 0; j < n; j++) {
                if (i != j && nums[i] == nums[j]) {
                    isUnique = false;
                    break;
                }
            }

            if (isUnique) {
                sum += nums[i];
            }
        }

        return sum;
    }
};
