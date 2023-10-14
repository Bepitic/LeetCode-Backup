class Solution {
public:
    vector<string> res;
    void recGeneration(string s,int o,int c, int n){
        if(o >= c && o <= n && c <= n){
            recGeneration(s+"(", o+1, c, n);
            recGeneration(s+")", o, c+1, n);
        }
        if(o == c && o == n) {
            res.push_back(s);
        }
    }
    vector<string> generateParenthesis(int n) {
        recGeneration("(", 1, 0, n);
        return res;
    }
};