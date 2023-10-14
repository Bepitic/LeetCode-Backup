class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> stk;
        for(string s:tokens){
            if(s == "*" || s == "+" || s == "/" || s == "-" ){
                int e2 = stoi(stk.top());
                stk.pop();
                int e1 = stoi(stk.top());
                stk.pop();
                if(s == "*"){
                    stk.push(to_string(e1 * e2));
                }
                if(s == "-"){
                    stk.push(to_string(e1 - e2));
                }
                if(s == "+"){
                    stk.push(to_string(e1 + e2));
                }
                if(s == "/"){
                    stk.push(to_string(e1 / e2));
                }
            }
            else{stk.push(s);}
        }
        return stoi(stk.top());
    }
};