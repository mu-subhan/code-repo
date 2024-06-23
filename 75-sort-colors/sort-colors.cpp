class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,j;
       for( i=0;i<nums.size()-1;i++){
        for( j=i+1;j<nums.size();j++){
            if(nums[i]>nums[j]){
                int temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
            }
        }
       } 
    
    }
};