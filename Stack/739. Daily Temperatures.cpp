class Solution {
public:
    
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        map<int,int> max_temp;
        vector<int> ans(temperatures.size());
        for(int i = temperatures.size()-1; i >= 0;--i){
            int min = temperatures.size();
            max_temp[temperatures[i]] = i;
            for(int j = temperatures[i]+1; j <= 100 ;++j){
                if(max_temp[j] > i && max_temp[j] < min){
                    min = max_temp[j];
                } 
            }
            if( min == temperatures.size()){
                ans[i] = 0;
            }else{
                ans[i] =  min-i;
            }

        }
        return ans;
    }
};