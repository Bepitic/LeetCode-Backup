class Solution {

public:
    bool myfunction (int i,int j) { return (i<j); }

    bool containsDuplicate(vector<int>& nums) {
        std::sort (nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); ++i){
            if(nums[i] == nums[i-1]){
                return true;
            }
            
        }
        return false;
    }
};