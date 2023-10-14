class MinStack {
public:

        vector<int> data;
        vector<int> min_data;
    MinStack() {
        vector<int> data;
        vector<int> min_data;

    }
    
    void push(int val) {
        if(this->data.size() == 0){
            data.push_back(val);
            min_data.push_back(val);
        }else{
            data.push_back(val);
            if(min_data[min_data.size()-1]>=val){
                min_data.push_back(val);
            }
        }
    }
    
    void pop() {
        if(min_data[min_data.size()-1]==data[data.size()-1]){
                min_data.pop_back();//(min_data.size()-1);
        }
        data.pop_back();//.remove(data.size()-1);
    }
    
    int top() {
        return data[data.size()-1];
    }
    
    int getMin() {
        return min_data[min_data.size()-1];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */