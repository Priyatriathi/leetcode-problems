class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(find(nums.begin(),nums.end(),nums[i]*-1)!=nums.end())
                return -1*nums[i];
        } 
        return -1;
    }
};