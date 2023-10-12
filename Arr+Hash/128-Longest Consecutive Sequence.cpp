class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> freq;
        for(auto elem : nums){
            freq[elem] += 1;
        }

        int max_concat = 0;
        for(auto elem : nums){
            int concat = 1;
            if(freq[elem]!=0){

                freq[elem] = 0;
                int prev = elem - 1;
                bool prev_num = true;
                while(prev_num){
                    if(freq[prev] != 0 ){
                        freq[prev] = 0;
                        concat++;
                        prev--;
                    }else{
                        prev_num = false;
                    }
                }

                int next = elem + 1;
                bool next_num = true;
                while(next_num){
                    if(freq[next] != 0 ){
                        freq[next] = 0;
                        concat++;
                        next++;
                    }else{
                        next_num = false;
                    }
                }

                if(concat > max_concat){
                    max_concat = concat;
                }

            }

        }
        return max_concat;
    }
};