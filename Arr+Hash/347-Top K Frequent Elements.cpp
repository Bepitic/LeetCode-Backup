class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::map<int,int> frec;
        vector<int> res;

        for(int num : nums){
            frec[num] += 1;
        }

        for(int i = 0; i < k; ++i){
            int max = 0;
            int value = 00;
            for (std::map<int, int>::iterator it=frec.begin(); it!=frec.end(); ++it){
                if(it->second > max){
                    max = it->second;
                    value = it->first;
                }
            }
            map<int,int>::iterator iter = frec.find(value);
            if( iter != frec.end() ){
                frec.erase( iter );
            }

            res.push_back(value);
        }
        return res;
    }
};