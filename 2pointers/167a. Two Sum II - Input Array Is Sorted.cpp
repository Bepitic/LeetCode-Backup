class Solution {
public:
    int binSearch(vector<int>& v, int target, int start, int end){
        int i = start;
        int j = end;

        while(i>=j){
            int middle = int((j-i)/2 + i);
            if(v[middle] < target){
                i = ++middle;
            }else if(v[middle] > target){
                j = --middle;
            }else if(v[middle] == target){
                return middle;
            }
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        for(int a = 0; a < numbers.size();++a){
            int find = target - numbers[a];
            
            //int found = binSearch(numbers,find,a,numbers.size()-1);
            int found = std::binary_search(numbers.begin()+a+1, numbers.end(), find);
            cout << found << endl;
            int b = 0;
            if(found){
                auto it = std::find(numbers.begin()+a+1, numbers.end(), find);
                b = it - numbers.begin();
            }
            if( found && numbers[a] + numbers[b] == target){
                res.push_back(a+1);
                res.push_back(b+1);
                return res;
            }
            
        }
        return res;

    }
};