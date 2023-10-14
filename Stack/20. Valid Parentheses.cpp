class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(char e:s){
            if(e == '[' ||e ==  '{' ||e ==  '(' ){
                stk.push(e);
            }
            if( stk.empty() && (e ==  ')' ||e ==  ']' ||e ==  '}' )){return false;}
            if((e ==  ')' ||e ==  ']' ||e ==  '}' )){
            if (e ==  ')' && stk.top() == '('){
                stk.pop();
            }else if (e ==  ']' && stk.top() == '['){
                stk.pop();
            }else if (e ==  '}' && stk.top() == '{'){
                stk.pop();
            }else{
                return false;
            }
            }

        }

        if(stk.empty()){return true;}
        else{return false;}
    }
};