class Solution {
public:
    int maxArea(vector<int>& height) {
        int s = 0;
        int e = height.size()-1;
        int maxArea = 0;
        while(s<e){
            int area = 0;
            if(height[s] < height[e]){
                area = height[s]*(e - s);
                if(maxArea < area){
                    maxArea = area;
                }
                ++s;
            }else{
                area = height[e]*(e - s);
                if(maxArea < area){
                    maxArea = area;
                }
                --e;
            }
            
        }
        return maxArea;
    }
};