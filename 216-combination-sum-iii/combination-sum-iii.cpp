class Solution {
public:

    void backTrackSolve(int sum, int size, vector<vector<int>>& nums, int indx, vector<int>& path, int currSum, vector<vector<int>>& res) 
    {
        if (path.size() == size && currSum == sum) 
        {
            res.push_back(path);
            return;
        }
        
        if (indx >= nums.size() || path.size() > size || currSum > sum)
            return;
    
        // Choose to not pick this no.
        backTrackSolve(sum, size, nums, indx + 1, path, currSum, res);

        // Choose to pick this no, so also add this number to the combination pair, as currSum + nums[index][0]
        path.push_back(nums[indx][0]);
        backTrackSolve(sum, size, nums, indx + 1, path, currSum + nums[indx][0], res);
        path.pop_back(); // Backtrack

    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> nums;
        vector<vector<int>> res;
        vector<int> path;
        for (int i = 1; i <= 9; i++) {
            nums.push_back({i});
        }

        backTrackSolve(n, k, nums, 0, path, 0, res);
        return res;
    }
};