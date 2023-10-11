class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> fw(nums.size(),1);
        vector<int> bw(nums.size(),1);

        for(int i = 1; i < nums.size();++i){
            fw[i] = fw[i-1] * nums[i-1];
        }
        for(int i = nums.size()-2; i >= 0 ;--i){
             bw[i] = bw[i+1] * nums[i+1];
        }
        vector<int> res;
        for(int i = 0; i < nums.size();++i){
            res.push_back(fw[i]*bw[i]);
        }
        
        // cout << "fw[i]" << endl;
        // for(int i = 0; i < nums.size();++i){
        //     cout << fw[i] << endl;
        // }

        // cout << "bw[i]" << endl;
        // for(int i = 0; i < nums.size();++i){
        //     cout << bw[i] << endl;
        // }



        return res;
    }
};