class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ret;
        vector<std::map<char,int>> maps;

        for( string str : strs){
            std::map<char,int> centinel;

            for(int i = 0 ; i < str.size(); ++i){
                centinel[str[i]] = centinel[str[i]] + 1;
            }

            if(maps.size() == 0 && ret.size() == 0){
                maps.push_back(centinel);
                vector<string> group_anagrams;
                group_anagrams.push_back(str);
                ret.push_back(group_anagrams);

            }else{

                bool is_in = false;
                for(int i = 0; i < maps.size(); i++){
                    if(centinel==maps[i]){
                        ret[i].push_back(str);
                        is_in = true; 
                    }
                }

                if(is_in == false){
                    maps.push_back(centinel);
                    vector<string> group_anagrams;
                    group_anagrams.push_back(str);
                    ret.push_back(group_anagrams);
                }

                

            }

        }
        return ret;

        
        

    }
};