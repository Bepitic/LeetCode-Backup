#include <algorithm>
#include <iterator>

class Solution {
public:
    vector<int> giveArray(vector<int>& nums, int a, int b){
        vector<int> ret;
        bool a_done = true;
        bool b_done = true;

        for (int i = 0; i < nums.size(); ++i){

            if(nums[i] == a && b_done && !a_done ){
                b_done = false;
                ret.push_back(i);
                // i = nums.size();
            }
            
            if(nums[i] == b && a_done ){
                a_done = false;
                ret.push_back(i);
                // i = nums.size();
            }
        
            

        }

        return ret;
    }

    vector<int> twoSum(vector<int>& nums, int target) {

        std::map<int, int> m;
        for(int i = 0 ; i < nums.size(); ++i){
            m[nums[i]] = m[nums[i]] + 1;
        }

        for(int i = 0 ; i < nums.size(); ++i){
            int search = target - nums[i];
            if(search == nums[i]){
                //search for 2 numbers in the hash.
                if(m[search] == 2){
                    return giveArray(nums, search, search);
                }

            }else{
                //search for 1 number in the hash.
                if(m[search] == 1){
                    return giveArray(nums, search, nums[i]);
                }
            }
        }
        return nums;


        // std::vector<int> nums1(nums);
        // std::sort (nums1.begin(), nums1.end());

        // for( int i = 0; i < nums.size()-1;++i ){
        //     for ( int j = i ; j < nums.size();++j ){
        //         if( num1[i] + num1[j] == target ){
        //             return giveArray(nums, num1[i], num1[j]);
        //         }else if(num1[i] + num1[j] >= target){
        //             i = 0;
        //             j++;
        //         }
        //     }
        // }

    }
};