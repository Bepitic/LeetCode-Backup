class Solution {
public:
    bool is_valid(std::map<char,int> m){
        for( auto el : m ){
            if(el.first != '.'){
                if(el.second > 1){
                    return false;
                }
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        // squares
        for(int l = 0; l < 3 ;++l )
        {
            int init_h = l * 3;
            int end_h  = l * 3 + 3;

            for(int k = 0; k < 3 ;++k )
            {
                int init_v = k * 3;
                int end_v  = k * 3 + 3;

                map<char,int> freq;
                for(int j = init_v; j < end_v; ++j){        
                    for(int i = init_h; i < end_h; ++i){
                        freq[board[i][j]] += 1;
                    }
                }
                if(is_valid(freq) == false){
                    return false;
                }
            }

        }
        
        // //lines_h
        for(int j = 0; j < 9; ++j){        
            map<char,int> freq;
            for(int i = 0; i < 9; ++i){
                freq[board[i][j]] += 1;
            }
            if(is_valid(freq) == false){
                return false;
            }
        }
        
        //lines_v
        for(int j = 0; j < 9; ++j){        
            map<char,int> freq1;
            for(int i = 0; i < 9; ++i){
                freq1[board[j][i]] += 1;
            }
            if(is_valid(freq1) == false){
                return false;
            }
        }
        

       return true; 
    }
};