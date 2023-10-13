#include <algorithm>    // std::min

class Solution {
public:
    int trap(vector<int>& height) {
        int s = 0;
        int e = height.size()-1;
        int water = 0;
        int waterLevel = 0;

        while(s<e && height[s]<=0){
            ++s;
        }
        while( s<e && height[e]<=0){
            --e;
        }

        while(s<e){
            int min = std::min( height[s], height[e]);
            if( min > waterLevel){
                cout << "waterLevel = " << waterLevel << endl;
                cout << "water = " << water << endl;
                cout << "s = " << s << endl;
                cout << "e = " << e << endl;
                cout << "min = " << min << endl;
                cout << "-----------" << "" << endl;

                water += (e-(s+1))*(min-waterLevel);
                waterLevel = min;
                                cout << "water = " << water << endl;
                cout << "-----------" << "" << endl;

            }

            if(s<e && height[s] <= waterLevel){
                ++s;
                water -= std::min(height[s],waterLevel);
                cout << "s = " << s <<" || red. water = " << std::min(height[s],waterLevel) << endl;
                //cout << "-----------" << "" << endl;

            }
            if( s<e &&  height[e] <= waterLevel){
                --e;
                water -= std::min(height[e],waterLevel);
                cout << "e = " << e <<" || red. water = " << std::min(height[e],waterLevel) << endl;

            }
            if(s==e){
                water += std::min(height[e],waterLevel);
            }
        }
        return water;
    }
};