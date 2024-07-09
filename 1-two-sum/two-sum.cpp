class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int compare=target-nums[i];

            if(mp.find(compare)!=mp.end()) return {mp[compare],i};

            mp[nums[i]]=i;
        }
        return {};
    }
};