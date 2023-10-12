class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s = 0;
        int e = numbers.size()-1;
        bool found = false;
        vector<int> ret;
        while(s<e && !found){
            if(numbers[s]+numbers[e] == target){
                found = true;
                ret.push_back(s+1);
                ret.push_back(e+1);
                
            }else if(numbers[s]+numbers[e] > target){
                --e;
            }else if(numbers[s]+numbers[e] < target){
                ++s;
            }
        }
        return ret;
    }
};