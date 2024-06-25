class Solution {
public:
    int sumOfUnique(std::vector<int>& nums) {
        unordered_map<int, int> countMap;
        int sum = 0;
        for (int num : nums) {
            countMap[num]++;
        }
        for (auto& pair : countMap) {
            if (pair.second == 1) {
                sum += pair.first;
            }
        }
        return sum;
    }
};