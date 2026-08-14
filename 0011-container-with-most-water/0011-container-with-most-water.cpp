
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max_area = 0;

        while (left <= right){
            int max_height = min(height[left], height[right]);

            int area = (right - left)* max_height;

            if (height[left] <= height[right]){
                left++;
            }
            else{
                --right;
            }
            max_area = max(max_area, area);

        }
        return max_area;
        
    }
};