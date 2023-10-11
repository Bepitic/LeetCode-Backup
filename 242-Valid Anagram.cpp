class Solution {
public:
    bool isAnagram(string s, string t) {

        std::map<char, int> m;

        for(int i = 0 ; i < s.size(); ++i){
            m[s[i]] = m[s[i]] + 1;
        }
        for(int i = 0 ; i < t.size(); ++i){
            m[t[i]] = m[t[i]] - 1;
        }

        for (std::map<char, int>::iterator it=m.begin(); it!=m.end(); ++it){
            if(0 != it->second){
                return false;
            }
        }
        return true;
        // std::map<std::string, int>::iterator i = m.begin();
        // std::map<std::string, int>::iterator nd = m.end();

        // if(s.size()!= t.size()){
        //     return false;
        // }

        // vector<bool> letterused(s.size());

        // for(int i = 0 ; i < s.size(); ++i){
        //     letterused[i] = false;
        // }

        // for(int i = 0 ; i < s.size(); ++i){
        //     bool sentinel = true;
        //     for(int j = 0 ; j < t.size(); ++j){
        //         if(s[i] == t[j] && !letterused[j] && sentinel ){
        //             sentinel = false;
        //             letterused[j] = true;
        //         }
        //     }
        // }

        // for(int i = 0 ; i < s.size(); ++i){
        //     if(letterused[i] == false){
        //         return false;
        //     }
        // }

        return true;
    }
};